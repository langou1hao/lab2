    int level = 0;//嵌套等级，初始为0
    pair<int, string> temp;
    for (int i = 0; i < unfiltered_key.size(); i++) {
        if (unfiltered_key[i] == "{") {
            level++;
?
        }
        else if (unfiltered_key[i] == "}") {
            level--;
        }
        temp.first = level;
        temp.second = unfiltered_key[i];
        level_key.push_back(temp);
    }
