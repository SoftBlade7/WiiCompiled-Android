#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80566278(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80566278;

loc_80566278:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
}

loc_80566284:
{
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r6;
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r3;
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805662B0;
    }
}

loc_805662A4:
{
    r5 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat32((r5 + 5420));
    goto loc_805662B8;
}

loc_805662B0:
{
    r5 = 0x808B0000u;
    f2.d = MemoryInline::FlatReadFloat32((r5 + 19436));
}

loc_805662B8:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    r5 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 5420));
}

loc_805662C8:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    r0 = 2;
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 48), f1.d);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805662EC;
    }
}

loc_805662E8:
{
    r0 = 1;
}

loc_805662EC:
{
    r3 = r0;
    ctx->lr = 0x805662F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x805654ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    r0 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite32(r29, r30);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r0));
}

loc_80566300:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80566314;
    }
}

loc_80566304:
{
    r0 = MemoryInline::FlatRead16((r29 + 52));
    MemoryInline::FlatWrite32((r29 + 4), r31);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r29 + 52), static_cast<uint16_t>(r0));
}

loc_80566314:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000007F gpr_write=0xF0001FFB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80566278 func_80566278 preserves=true fpr_mask=0x00000000
