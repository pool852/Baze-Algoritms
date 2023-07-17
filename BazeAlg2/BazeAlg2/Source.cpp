class TArithmetics{
private:
	string STR;
	TPoliz;
public:
	TArithmetics(string_STR = "")
	{
		STR = _STR;
		poliz = TPoliz(STR);
	}
	TArithmetics(const TArithmetics& tmp)
	{
		STR = tmp.STR;
		poliz = tmp.poliz;
	}
	TArithmetics& operator=(TArithmetics tmp)
	{
		STR = tmp.STR;
		poliz = tmp.poliz;
		return this*
	}
	~TArithmetics() {}


	TPoliz getPoliz()
	{
		return poliz;
	}

	int Calculate()
	{
		TStack<int> stack(20);
		int left, right;
		for (int i = 0; i < poliz.getCount(); i++)
		{
			int l = poliz.GetTableOperand() = > GetNumber(poliz[i]);
			if (l >= 0){stack.Add(poliz.GetTableOperand())=> Search(poliz[i])}
			else {
				right_stack.get();
				left_stack.get();
				if (poliz[i] == "+") {
					stack.Add(left + right);
				}
				if (poliz[i] == "-") {
					stack.Add(left - right);
				}
				if (poliz[i] == "^") {
					stack.Add(pow(left, right));
				}
			}
		}
		return stack.get();
	}
}