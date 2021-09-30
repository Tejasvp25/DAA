/**
 *  Name - Tejas Patil
 *  GR No - 22020163
 *  Roll No - 323080
 *  Div - TY-C (C3 Batch) 
 *
 *  @author Tejas-PC
 * 
 *  https://github.com/Tejasvp25/DAA/blob/master/knapsack.cpp
 **/

#include <iostream>
using namespace std;
void knapsack(int num, float weight[], float profit[], float capacity)
{
    float x[num], tp = 0;
    int i, j, u;
    u = capacity;

    for (i = 0; i < num; i++)
        x[i] = 0.0;

    for (i = 0; i < num; i++)
    {
        if (weight[i] > u)
            break;
        else
        {
            x[i] = 1.0;
            tp = tp + profit[i];
            u = u - weight[i];
        }
    }

    if (i < num)
        x[i] = u / weight[i];

    tp = tp + (x[i] * profit[i]);

    cout << "\nMaximum profit is : " << tp << endl;
}

int main()
{
    int num;

    cout << "\nEnter the no. of objects : ";
    cin >> num;

    float weight[num], profit[num], ratio[num], temp, capacity;

    cout << "\nEnter the Weight and profits of each object : ";
    for (int i = 0; i < num; i++)
        cin >> weight[i] >> profit[i];

    cout << "\nEnter the capacity of knapsack : ";
    cin >> capacity;

    for (int i = 0; i < num; i++)
    {
        ratio[i] = profit[i] / weight[i];
    }

    for (int i = 0; i < num; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (ratio[i] < ratio[j])
            {
                temp = ratio[j];
                ratio[j] = ratio[i];
                ratio[i] = temp;

                temp = weight[j];
                weight[j] = weight[i];
                weight[i] = temp;

                temp = profit[j];
                profit[j] = profit[i];
                profit[i] = temp;
            }
        }
    }

    knapsack(num, weight, profit, capacity);
    return (0);
}