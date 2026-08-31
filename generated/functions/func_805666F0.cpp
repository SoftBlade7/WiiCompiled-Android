#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805666F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805666F0;

loc_805666F0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    r3 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    ctx->lr = 0x80566718u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023E48Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r31 + 264));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80566720:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80566730;
    }
}

loc_80566724:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80566728:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80566798;
    }
}

loc_8056672C:
{
    goto loc_805667AC;
}

loc_80566730:
{
    r3 = 0x80380000u;
    r5 = 0x802A0000u;
    r6 = MemoryInline::FlatRead32((r3 + 28432));
    r3 = 0x80890000u;
    r4 = 0x80890000u;
    r0 = MemoryInline::FlatRead16((r31 + 52));
    r6 = (r6 * 12);
    r5 = (r5 + 16104);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 5416));
    r0 = (r0 | 1);
    f2.d = MemoryInline::FlatReadFloat64((r4 + 5424));
    r3 = (r5 + r6);
    r5_addr_2 = (r5 + r6);
    r4 = MemoryInline::FlatRead16(r5_addr_2);
    r3 = MemoryInline::FlatRead16((r3 + 2));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    MemoryInline::FlatWriteFloat32((r31 + 64), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32((r31 + 68), f3.d);
    MemoryInline::FlatWriteFloat32((r31 + 8), f1.d);
    MemoryInline::FlatWrite16((r31 + 52), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r31 + 12), f0.d);
    goto loc_80566810;
}

loc_80566798:
{
    r4 = 0x808B0000u;
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r4 + 19440));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80566E38u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80566810;
}

loc_805667AC:
{
    r3 = 0x80380000u;
    r5 = 0x802A0000u;
    r6 = MemoryInline::FlatRead32((r3 + 28432));
    r3 = 0x80890000u;
    r4 = 0x80890000u;
    r0 = MemoryInline::FlatRead16((r31 + 52));
    r6 = (r6 * 12);
    r5 = (r5 + 16104);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 5416));
    r0 = (r0 | 1);
    f2.d = MemoryInline::FlatReadFloat64((r4 + 5424));
    r3 = (r5 + r6);
    r5_addr_0 = (r5 + r6);
    r4 = MemoryInline::FlatRead16(r5_addr_0);
    r3 = MemoryInline::FlatRead16((r3 + 2));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    MemoryInline::FlatWriteFloat32((r31 + 64), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32((r31 + 68), f3.d);
    MemoryInline::FlatWriteFloat32((r31 + 8), f1.d);
    MemoryInline::FlatWrite16((r31 + 52), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r31 + 12), f0.d);
}

loc_80566810:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805666F0 func_805666F0 preserves=true fpr_mask=0x00000000
