class TPoliz {
public:
	Tpoliz(string STR = "") {
		size = STR.lenght();
		count = 0;
		mem = new string[size];
		lex = new string[size];
		size_lex = size;
		StringtoWord(STR, "+-*/() ", *lex, count_lex);
		MadeTableOperation();
		OPstack = TStack<TRecord>(20);
		MadePoliz(STR);
		TPoliz(const TPoliz tmp) {
			size = tmp.size;
			count = tmp.count;
			mem = new string[size];
			for (int i = 0; i < count; i++) {
				mem[i] = tmp.mem[i];
			}
			lex = new string[size];
			TableOperation = tmp.TableOperation();
			OPSTack = tmp.OPStak;
			TAbleOperand = tmp.TableOperand;
			TPoliz &operator = (TPoliz.tmp) {
				if (size != tmp.size) {
					delete[] mem;
					size = tmp.size{
						if (size != 0) {
							delete[] mem;
}
					size = tmp.size;
					mem = new string[size];
					}
					count = tmp.count;

				}
				return *this;
			}
			~TPoliz() {
				delete[] mem;
				delete[] lex;
				delete[] TableOperand;
			}
			int getcount() {
				return count;
			}
			TPoliz = operator[](int K){
				if ((K >= 0) && (K < count)) {
					return mem[K];
				}
				else{
					return "";
				}
				string GetStringPoliz() {
					string STR = "";
				}
				for (nit i = 0; i < count; i++) {
					STR = STR + mem[i] + "";
				}
				return STR;
			}
			TTable* GetOperand() {
				return TableOperand;
			}

		}

	}

};