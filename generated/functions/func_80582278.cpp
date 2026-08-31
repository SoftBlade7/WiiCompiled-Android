#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80582278(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80582278;

loc_80582278:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 135004160;
    r5 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r4 + 256);
    r6 = 1;
    r7 = 1;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r8 = MemoryInline::FlatRead32(r3);
    r9 = MemoryInline::FlatRead32((r8 + 4));
    r4 = MemoryInline::FlatRead32((r9 + 12));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805822C4;
    }
}

loc_805822B4:
{
    r0 = MemoryInline::FlatRead32((r9 + 4));
    r0 = (r0 & 16);
}

loc_805822BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805822C4;
    }
}

loc_805822C0:
{
    r7 = 0;
}

loc_805822C4:
{
}

loc_805822C8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_805822DC;
    }
}

loc_805822CC:
{
    r0 = MemoryInline::FlatRead32((r9 + 20));
    r0 = (r0 & 128);
}

loc_805822D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805822DC;
    }
}

loc_805822D8:
{
    r6 = 0;
}

loc_805822DC:
{
}

loc_805822E0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_805822F4;
    }
}

loc_805822E4:
{
    r0 = MemoryInline::FlatRead32((r9 + 8));
    r0 = (r0 & 1);
}

loc_805822EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805822F4;
    }
}

loc_805822F0:
{
    r5 = 0;
}

loc_805822F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_805822F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80582390;
    }
}

loc_805822FC:
{
    r8 = MemoryInline::FlatRead32((r8 + 4));
    r5 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 6660));
    r0 = 0;
    r7 = MemoryInline::FlatRead32((r8 + 12));
    r6 = 0x808B0000u;
    r4 = 3;
    r5 = 1;
    r7 = (r7 & -2);
    MemoryInline::FlatWrite32((r8 + 12), r7);
    r7 = MemoryInline::FlatRead32(r3);
    r8 = MemoryInline::FlatRead32((r7 + 4));
    r7 = MemoryInline::FlatRead32((r8 + 12));
    r7 = (r7 | 2);
    MemoryInline::FlatWrite32((r8 + 12), r7);
    MemoryInline::FlatWrite32((r3 + 236), r0);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 23436));
    MemoryInline::FlatWriteFloat32((r3 + 240), f0.d);
    r3 = r31;
    ctx->lr = 0x8058234Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8059041Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    r4 = 6;
    ctx->lr = 0x80582358u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x805907B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r4 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = MemoryInline::FlatRead32((r4 + -10448));
    r0 = MemoryInline::FlatRead32((r5 + 2928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80582370:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80582390;
    }
}

loc_80582374:
{
    r0 = MemoryInline::FlatRead16((r5 + 2974));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(13));
}

loc_8058237C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80582390;
    }
}

loc_80582380:
{
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 8), r0);
}

loc_80582390:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80582278 func_80582278 preserves=true fpr_mask=0x00000000
