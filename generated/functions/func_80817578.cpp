#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80817578(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80817578;

loc_80817578:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    r8 = 1127219200;
    r9 = 0x808D0000u;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    r6 = 0x808B0000u;
    r9 = (r9 + 25680);
    r7 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 156), r31);
    r31 = r4;
    f3.d = MemoryInline::FlatReadFloat64((r6 + -19384));
    r10 = r3;
    MemoryInline::FlatWriteRam32((r1 + 152), r30);
    r30 = r5;
    r0 = MemoryInline::FlatRead32((r9 + 8));
    r7 = MemoryInline::FlatRead32((r7 + -10448));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r6 = MemoryInline::FlatRead32((r7 + 32));
    MemoryInline::FlatWriteRam32((r1 + 128), r8);
    r4 = MemoryInline::FlatRead32((r3 + 308));
    r0 = MemoryInline::FlatRead32((r3 + 312));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 128));
    r5 = MemoryInline::FlatRead16(r9);
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r9 + 4));
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r5));
}

loc_808175E8:
{
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    f4.d = PpcFmulsInline(f1.d, f0.d);
    r0 = MemoryInline::FlatRead32((r3 + 316));
    MemoryInline::FlatWriteRam32((r1 + 136), r8);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80817608;
    }
}

loc_80817600:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 308));
    goto loc_80817674;
}

loc_80817608:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r6));
}

loc_8081760C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8081766C;
    }
}

loc_80817610:
{
    r0 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r0 = (r6 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 128));
    MemoryInline::FlatWriteRam32((r1 + 140), r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 136));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f4.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80817638:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8081766C;
    }
}

loc_8081763C:
{
    r0 = (r6 - r5);
    r4 = 0x808B0000u;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 140), r0);
    f1.d = MemoryInline::FlatReadFloat32((r4 + -19388));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 136));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 308));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_80817674;
}

loc_8081766C:
{
    r3 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -19392));
}

loc_80817674:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    r3 = (r1 + 80);
    r4 = (r1 + 20);
    r5 = (r10 + 48);
    ctx->lr = 0x80817688u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FE14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = (r1 + 80);
    r4 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FABCu>(ctx);
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r5 = r30;
    r3 = (r1 + 8);
    r4 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x802303F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
    r0 = MemoryInline::FlatRead32(r31);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r31 + 12), f0.d);
    r0 = (r0 | 64);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r31 + 16), f0.d);
    MemoryInline::FlatWrite32(r31, r0);
    r31 = MemoryInline::FlatRead32((r1 + 156));
    r30 = MemoryInline::FlatRead32((r1 + 152));
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000057F gpr_write=0xE00007FB gpr_return=0x00000018 fpr_read=0xFC00001F fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80817578 func_80817578 preserves=true fpr_mask=0x00000000
