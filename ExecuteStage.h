class ExecuteStage: public Stage
{
   private:
      void setMInput(M * mreg, uint64_t stat, uint64_t icode, uint64_t Cnd, 
                     uint64_t valE, uint64_t valA,
                     uint64_t dstE, uint64_t dstM);
   public:
      bool doClockLow(PipeReg ** pregs, Stage ** stages);
      void doClockHigh(PipeReg ** pregs);

      uint64_t e_alu(uint64_t alufun, bool setCC, uint64_t aluA, uint64_t aluB);
      uint64_t aluA(uint64_t icode, E * ereg);
      uint64_t aluB(uint64_t icode, E * ereg);
      uint64_t alufun(uint64_t icode, E * ereg);
      bool set_cc(uint64_t icode);
      uint64_t e_dstE(uint64_t icode, uint64_t e_Cnd, E * ereg);
};
