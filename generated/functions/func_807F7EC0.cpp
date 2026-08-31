#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_807F8380_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_807F83F0_statefree(uint32_t, uint32_t);

extern "C" void func_807F7EC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807F7EC0;

loc_807F7EC0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    ctx->lr = 0x807F7EDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x807F7E80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r0 = MemoryInline::FlatRead8((r31 + 425));
    r30 = (r3 & 255);
}

loc_807F7EE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r30))) {
        goto loc_807F7EF8;
    }
}

loc_807F7EEC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 425), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r31 + 438), static_cast<uint8_t>(r0));
}

loc_807F7EF8:
{
    r3 = r31;
    // inline leaf 0x807F8274 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 100));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    // end of inlined leaf 0x807F8274
    // inline leaf 0x807F826C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x807F826C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(45));
}

loc_807F7F08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F7F20;
    }
}

loc_807F7F0C:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x807F7F20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807F7F20:
{
    // inline leaf 0x807F8288 (4 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x807F8288
    // inline leaf 0x807F8280 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 907));
    // end of inlined leaf 0x807F8280
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807F7F2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F8254;
    }
}

loc_807F7F30:
{
    // inline leaf 0x807F8298 (5 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x807F8298
    r0 = (r3 + -106);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_807F7F3C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807F7F4C;
    }
}

loc_807F7F40:
{
    r0 = (r3 + -110);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_807F7F48:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807F7F6C;
    }
}

loc_807F7F4C:
{
    r3 = (r31 + 412);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x807F82ACu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = r31;
    ctx->lr = 0x807F7F5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807F8840u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r31;
    r4 = (r31 + 412);
    ctx->lr = 0x807F7F68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807F84C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807F8254;
}

loc_807F7F6C:
{
    r0 = MemoryInline::FlatRead32((r31 + 440));
}

loc_807F7F74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_807F7FA0;
    }
}

loc_807F7F78:
{
    r3 = MemoryInline::FlatRead32((r31 + 444));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(180));
}

loc_807F7F80:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 444), r0);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807F8254;
    }
}

loc_807F7F8C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 440), r0);
    r3 = r31;
    ctx->lr = 0x807F7F9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807F8840u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807F8254;
}

loc_807F7FA0:
{
}

loc_807F7FA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_807F7FD0;
    }
}

loc_807F7FA8:
{
    r3 = MemoryInline::FlatRead32((r31 + 444));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(180));
}

loc_807F7FB0:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 444), r0);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807F8254;
    }
}

loc_807F7FBC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 440), r0);
    r3 = r31;
    ctx->lr = 0x807F7FCCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807F8840u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807F8254;
}

loc_807F7FD0:
{
    r3 = r30;
    // inline leaf 0x807F82BC (8 guest instruction(s))
    r4 = 0x809C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r3 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x807F82BC
}

loc_807F7FDC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_807F8170;
    }
}

loc_807F7FE0:
{
    r3 = r30;
    // inline leaf 0x807F7E64 (7 guest instruction(s))
    r4 = 0x809C0000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r3 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r3 = MemoryInline::FlatRead8((r3 + 38));
    // end of inlined leaf 0x807F7E64
    r0 = MemoryInline::FlatRead32((r31 + 448));
    r3 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_807F7FF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F804C;
    }
}

loc_807F7FF8:
{
    r3 = 3;
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 440), r3);
    r3 = r31;
    MemoryInline::FlatWrite32((r31 + 444), r0);
    ctx->lr = 0x807F8010u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x807F7E80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r0 = MemoryInline::FlatRead32((r31 + 448));
    r3 = (r3 & 255);
    r5 = (r31 + 412);
    r4 = (r0 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    InvokeDirectCpu<0x807F82DCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    r3 = r31;
    r4 = (r31 + 412);
    ctx->lr = 0x807F8030u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807F84C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r31;
    ctx->lr = 0x807F8038u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807F8878u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r30;
    // inline leaf 0x807F7E64 (7 guest instruction(s))
    r4 = 0x809C0000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 1020);
    r3 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    r3 = MemoryInline::FlatRead8((r3 + 38));
    // end of inlined leaf 0x807F7E64
    r0 = (r3 & 255);
    MemoryInline::FlatWrite32((r31 + 448), r0);
    goto loc_807F8254;
}

loc_807F804C:
{
    r3 = (r31 + 412);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x807F82ACu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 438), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = (r31 + 412);
    ctx->lr = 0x807F8068u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807F84C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    // inline leaf 0x807F7EB4 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x807F7EB4
    // inline leaf 0x807F82F4 (11 guest instruction(s))
}

loc_inl9_0x807F82F4:
{
    r4 = MemoryInline::FlatRead32((r3 + 2928));
    r3 = 0;
    r4 = (r4 + -3);
}

loc_inl9_0x807F8304:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(7))) {
        goto loc_inl9_return;
    }
}

loc_inl9_0x807F8308:
{
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r0 & 193);
}

loc_inl9_0x807F8314:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl9_return;
    }
}

loc_inl9_0x807F8318:
{
    r3 = 1;
    goto loc_inl9_cont_807F82F4;
}

loc_inl9_return:
{
}

loc_inl9_cont_807F82F4:
{
    // end of inlined leaf 0x807F82F4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807F8074:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F8254;
    }
}

loc_807F8078:
{
    r3 = (r31 + 412);
    r4 = (r1 + 9);
    r5 = (r1 + 8);
    r6 = (r1 + 10);
    // inline leaf 0x807F8320 (16 guest instruction(s))
}

loc_inl10_0x807F8320:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_inl10_0x807F8328:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_inl10_0x807F8348;
    }
}

loc_inl10_0x807F832C:
{
    r0 = 99;
    MemoryInline::FlatWriteRam8(r4, static_cast<uint8_t>(r0));
    r3 = 59;
    MemoryInline::FlatWriteRam8(r5, static_cast<uint8_t>(r3));
    r0 = 999;
    MemoryInline::FlatWriteRam16(r6, static_cast<uint16_t>(r0));
    goto loc_inl10_cont_807F8320;
}

loc_inl10_0x807F8348:
{
    MemoryInline::FlatWriteRam8(r4, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 6));
    MemoryInline::FlatWriteRam8(r5, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWriteRam16(r6, static_cast<uint16_t>(r0));
}

loc_inl10_cont_807F8320:
{
    // end of inlined leaf 0x807F8320
    r3 = (r31 + 412);
    // inline leaf 0x807F8360 (8 guest instruction(s))
    r4 = MemoryInline::FlatRead16((r3 + 4));
    r3 = 999;
    r0 = (r4 + -999);
    r3 = (r4 | ~r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_4 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x807F8360
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807F8098:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F80CC;
    }
}

loc_807F809C:
{
    r3 = (r1 + 36);
    r4 = 0;
    r5 = 0;
    r6 = 0;
    // inline leaf 0x807F8380 (9 guest instruction(s))
    r7 = 0x808B0000u;
    r0 = 1;
    r7 = (r7 + 11588);
    MemoryInline::FlatWriteRam32(r3, r7);
    MemoryInline::FlatWriteRam8((r3 + 10), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 6), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r6));
    // end of inlined leaf 0x807F8380
    r3 = r31;
    r4 = (r1 + 36);
    ctx->lr = 0x807F80BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807F84C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 36);
    r4 = -1;
    ctx->lr = 0x807F80C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8051C334u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807F8254;
}

loc_807F80CC:
{
    r0 = MemoryInline::FlatRead8((r31 + 436));
}

loc_807F80D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807F8128;
    }
}

loc_807F80D8:
{
    r0 = MemoryInline::FlatRead8((r1 + 9));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F80E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F8128;
    }
}

loc_807F80E4:
{
    r3 = (r1 + 24);
    r4 = 1;
    r5 = 0;
    r6 = 0;
    // inline leaf 0x807F8380 (9 guest instruction(s))
    r7 = 0x808B0000u;
    r0 = 1;
    r7 = (r7 + 11588);
    MemoryInline::FlatWriteRam32(r3, r7);
    MemoryInline::FlatWriteRam8((r3 + 10), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 6), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r6));
    // end of inlined leaf 0x807F8380
    r3 = r31;
    r4 = (r1 + 24);
    ctx->lr = 0x807F8104u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807F84C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 24);
    r4 = -1;
    ctx->lr = 0x807F8110u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8051C334u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 436), static_cast<uint8_t>(r0));
    r3 = r31;
    MemoryInline::FlatWrite32((r31 + 440), r0);
    ctx->lr = 0x807F8124u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807F8878u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807F8254;
}

loc_807F8128:
{
    r0 = MemoryInline::FlatRead8((r31 + 437));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F8130:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F8254;
    }
}

loc_807F8134:
{
    r0 = MemoryInline::FlatRead8((r1 + 9));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F813C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F8254;
    }
}

loc_807F8140:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
}

loc_807F8148:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807F815C;
    }
}

loc_807F814C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F8254;
    }
}

loc_807F8150:
{
    r0 = MemoryInline::FlatRead16((r1 + 10));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F8158:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F8254;
    }
}

loc_807F815C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 437), static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->lr = 0x807F816Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807F8878u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807F8254;
}

loc_807F8170:
{
    r0 = MemoryInline::FlatRead8((r31 + 438));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F8178:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F8254;
    }
}

loc_807F817C:
{
    // inline leaf 0x807F7EB4 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x807F7EB4
    // inline leaf 0x807F83A4 (8 guest instruction(s))
}

loc_inl15_0x807F83A4:
{
    r0 = MemoryInline::FlatRead32((r3 + 2928));
    r3 = 1;
}

loc_inl15_0x807F83B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_inl15_return;
    }
}

loc_inl15_0x807F83B4:
{
}

loc_inl15_0x807F83B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_inl15_return;
    }
}

loc_inl15_0x807F83BC:
{
    r3 = 0;
    goto loc_inl15_cont_807F83A4;
}

loc_inl15_return:
{
}

loc_inl15_cont_807F83A4:
{
    // end of inlined leaf 0x807F83A4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807F8188:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F81C4;
    }
}

loc_807F818C:
{
    // inline leaf 0x807F7EB4 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x807F7EB4
    // inline leaf 0x807F83C4 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x807F83C4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807F8198:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F81E4;
    }
}

loc_807F819C:
{
    // inline leaf 0x807F7EB4 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x807F7EB4
    // inline leaf 0x807F82F4 (11 guest instruction(s))
}

loc_inl19_0x807F82F4:
{
    r4 = MemoryInline::FlatRead32((r3 + 2928));
    r3 = 0;
    r4 = (r4 + -3);
}

loc_inl19_0x807F8304:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(7))) {
        goto loc_inl19_return;
    }
}

loc_inl19_0x807F8308:
{
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r0 & 193);
}

loc_inl19_0x807F8314:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl19_return;
    }
}

loc_inl19_0x807F8318:
{
    r3 = 1;
    goto loc_inl19_cont_807F82F4;
}

loc_inl19_return:
{
}

loc_inl19_cont_807F82F4:
{
    // end of inlined leaf 0x807F82F4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807F81A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F81E4;
    }
}

loc_807F81AC:
{
    r3 = r31;
    ctx->lr = 0x807F81B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x807F7E80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = (r3 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x807F83D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807F81C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F81E4;
    }
}

loc_807F81C4:
{
    r3 = (r31 + 412);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x807F82ACu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 438), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = (r31 + 412);
    ctx->lr = 0x807F81E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807F84C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807F8254;
}

loc_807F81E4:
{
    // inline leaf 0x807F7EB4 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x807F7EB4
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x807F82F4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807F81F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F8220;
    }
}

loc_807F81F4:
{
    r3 = r31;
    ctx->lr = 0x807F81FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x807F7E80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = (r3 & 255);
    r4 = (r31 + 412);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x807F83F0u) && KnownTranslatedCpuCall<0x807F83F0u>::kAvailable && !KnownTranslatedCpuCall<0x807F83F0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x807F83F0u>()) {
        const auto state_free_result_807F83F0_7618 = func_807F83F0_statefree(r3, r4);
        r5 = static_cast<uint32_t>(state_free_result_807F83F0_7618);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[12] = r12;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x807F83F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 438), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = (r31 + 412);
    ctx->lr = 0x807F821Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807F84C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807F8254;
}

loc_807F8220:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 438), static_cast<uint8_t>(r0));
    r3 = (r1 + 12);
    r4 = 0;
    r5 = 0;
    r6 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x807F8380u) && KnownTranslatedCpuCall<0x807F8380u>::kAvailable && !KnownTranslatedCpuCall<0x807F8380u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x807F8380u>()) {
        const auto state_free_result_807F8380_7E47 = func_807F8380_statefree(r3, r4, r5, r6);
        r0 = static_cast<uint32_t>(state_free_result_807F8380_7E47[0]);
        r7 = static_cast<uint32_t>(state_free_result_807F8380_7E47[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[12] = r12;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x807F8380u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r31;
    r4 = (r1 + 12);
    ctx->lr = 0x807F8248u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807F84C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 12);
    r4 = -1;
    ctx->lr = 0x807F8254u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8051C334u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807F8254:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807F7EC0 func_807F7EC0 preserves=true fpr_mask=0x00000000
