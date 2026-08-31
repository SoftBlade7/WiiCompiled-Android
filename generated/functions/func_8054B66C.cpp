#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054B66C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;

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

    goto loc_8054B66C;

loc_8054B66C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    r4 = MemoryInline::FlatRead16((r3 + 36));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_8054B690:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(40))) {
        goto loc_8054B69C;
    }
}

loc_8054B694:
{
    r0 = (r4 + 2);
    MemoryInline::FlatWrite16((r3 + 36), static_cast<uint16_t>(r0));
}

loc_8054B69C:
{
    r0 = MemoryInline::FlatRead16((r3 + 36));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(40));
}

loc_8054B6A4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8054B6B0;
    }
}

loc_8054B6A8:
{
    r0 = 40;
    MemoryInline::FlatWrite16((r3 + 36), static_cast<uint16_t>(r0));
}

loc_8054B6B0:
{
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r5 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r31 + 48));
    r6 = MemoryInline::FlatRead32((r31 + 52));
    ctx->lr = 0x8054B6C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8054CC44u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    r29 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8054B6C8:
{
    MemoryInline::FlatWrite8((r31 + 160), static_cast<uint8_t>(r3));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8054B734;
    }
}

loc_8054B6D0:
{
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 3888));
    r30 = 0;
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r4 = 16777216;
    r0 = (r4 + -32);
}

loc_8054B6F4:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8054B700;
    }
}

loc_8054B6F8:
{
    r30 = 1;
    goto loc_8054B728;
}

loc_8054B700:
{
    r4 = MemoryInline::FlatRead32((r31 + 152));
    r0 = MemoryInline::FlatRead8((r4 + 13));
}

loc_8054B70C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8054B728;
    }
}

loc_8054B710:
{
    r0 = MemoryInline::FlatRead32((r31 + 156));
    r4 = MemoryInline::FlatRead32((r4 + 20));
    r0 = (r3 - r0);
}

loc_8054B720:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_8054B728;
    }
}

loc_8054B724:
{
    r30 = 1;
}

loc_8054B728:
{
}

loc_8054B72C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8054B734;
    }
}

loc_8054B730:
{
    r29 = 0;
}

loc_8054B734:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8054B738:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8054B7A0;
    }
}

loc_8054B73C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 40), f0.d);
    r3 = MemoryInline::FlatRead32((r31 + 152));
    MemoryInline::FlatWriteFloat32((r31 + 44), f1.d);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = PPC_Fctiwz(f0.d);
    r4 = MemoryInline::FlatRead32((r31 + 152));
    f0.d = PPC_Fctiwz(f2.d);
    fctiwzword0 = PPC_FprLowWordInline(f1.d);
    r6 = fctiwzword0;
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = (r6 + -1);
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r6));
    r3 = (r0 & 65532);
    r5 = fctiwzword1;
    MemoryInline::FlatWrite16((r4 + 6), static_cast<uint16_t>(r5));
    r0 = (r5 + -1);
    MemoryInline::FlatWrite16((r4 + 8), static_cast<uint16_t>(r3));
    r0 = (r0 & 65532);
    MemoryInline::FlatWrite16((r4 + 10), static_cast<uint16_t>(r0));
    goto loc_8054B7A8;
}

loc_8054B7A0:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 8), r0);
}

loc_8054B7A8:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFF9F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8054B66C func_8054B66C preserves=true fpr_mask=0x00000000
