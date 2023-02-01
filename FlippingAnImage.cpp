#include <iostream>
#include <vector>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

vector<int> invert(vector <int> &array)
{
    for(int i = 0; i < array.size(); i++)
    {
        if(array.at(i) == 1) array.at(i) = 0;
        else array.at(i) = 1;
    }
    return array;
}

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

    for(int i = 0; i < image.size(); i++)
    {
        int end = image.at(i).size() - 1;
        for(int j = 0; j < image.at(i).size(); j++)
        {
            if(j >= end) break;
            swap(&image.at(i).at(j), &image.at(i).at(end));
            end-=1;
        }
        image.at(i) = invert(image.at(i));
    }
    return image;
}
int main()
{
    vector<vector<int>> image = {{1,1,0}, {1,0,1}, {0,0,0}};
    image = flipAndInvertImage(image);
    for(auto a: image)
    {
        for(auto b: a)
            cout << b << " ";
        cout << endl;
    }
    return 0;
}