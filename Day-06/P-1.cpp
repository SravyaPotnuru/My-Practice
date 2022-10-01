//The skyline problem

//Step-1:store the start and end coordinates of buildings in a array.
//Step-2:sort the array of coordinates by keeping in mind the edgecases.
  //edgecase-1:if two buildings have same start coordinate then one with taller height should come first
  //edgecase-2:if two buildings have same end coordinate the one with smaller height should come first
  //edgecase-3:if one building have same end and with another building having same start then smaller building come first
//step-3:Now push the heights in a max Heap using Priority queue.
//step-4:compare
  //For the start points if there is height change in the queue the store the coordinates in answer
  //For end points if there is height change in the queue then store x coordinate and max of the priority queue in the answer and update the max heap with the new height.
//step-5:Return answer array.

class Solution {
public:
    
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<pair<int, pair<int, int>>> sky;
        //1 is start
        //2 is end
        for(auto v:buildings){
            int start = v[0];
            int finish = v[1];
            int h = v[2];
            sky.push_back(make_pair(start, make_pair(h, 1)));
            sky.push_back(make_pair(finish, make_pair(h, 2)));
        }
        
        sort(sky.begin(), sky.end());
        
        vector<vector<int>> res;
        multiset<int> height;
        height.insert(0);
        int max_h = 0;
        for(auto v:sky){
            int point = v.first;
            int h = v.second.first;
            int ch = v.second.second;
            
            if(ch==1){
                //start height
                height.insert(h);
				//multiple height starts at the same point
                while(!res.empty() && res[res.size()-1][0]==point && res[res.size()-1][1] < *(height.rbegin())){
                    res.pop_back();
                }
                if(*(height.rbegin()) > max_h){
                    res.push_back({point, h});
                    max_h = *(height.rbegin());
                }
            }
            else{
                //end height
                height.erase(height.find(h));
				//multiple height ends at the same point
 while(!res.empty() && res[res.size()-1][0]==point && res[res.size()-1][1] > *(height.rbegin())){
                    res.pop_back();
                }
                if(*(height.rbegin()) < max_h){
                    res.push_back({point, *(height.rbegin())});
                    max_h = *(height.rbegin());
                }
            }
			
			//this particular way of writing this code ensures that the 3rd edge case is automatically handled
          
        }
        
        return res;
    }
};

