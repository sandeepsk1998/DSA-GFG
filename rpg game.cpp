  #include<iostream>
    #include<vector>
    using namespace std;
     
 int  getMaxArea(vector<int> arr)
    {
        // Your code here
        stack<int>st;
      
        int n=arr.size(),ans=0,i=0;
        arr.push_back(0);
        
        
        while(i<n)
        {
            while(!st.empty() and arr[st.top()]>arr[i])
            {
                int t=st.top;
                int h=arr[t];
                st.top();
                if(st.empty())
                {
                    ans=max(ans,h*i);
                }
                else
                {
                int len=i-st.top()-1;
                ans=max(ans,h*len);
            }
            }
            st.push(i);
           i++; 
        }
        return ans;
    }
    int main()
    {
        vector<int>arr={6,2,5,4,5,1,6}
         
        getMaxArea(arr);
        return 0;
    }
