#include <iostream>

int main()
{
    int Q, len;
    std::cin >> Q;

    for (int q = 0; q < Q; q++)
    {
        std::string str;

        std::cin >> len;
        std::cin >> str;

        int cnt = 0;

        for (int i = 1; i < len; i++)
        {
            if (str[i - 1] == str[i])
                cnt++;
        }

        std::cout << cnt << "\n";
    }

    return 0;
}
