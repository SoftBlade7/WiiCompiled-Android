#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054B9CC(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8054B9CC;

loc_8054B9CC:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r5 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    MemoryInline::FlatWriteRam32((r1 + 48), r28);
    r28 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r4 = MemoryInline::FlatRead32((r28 + 48));
    r6 = MemoryInline::FlatRead32((r28 + 52));
    ctx->lr = 0x8054BA00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite8((r28 + 160), static_cast<uint8_t>(r3));
    r30 = MemoryInline::FlatRead32((r28 + 152));
    r29 = MemoryInline::FlatRead8((r30 + 13));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8054BA10:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8054BA7C;
    }
}

loc_8054BA14:
{
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8054BA18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8054BA70;
    }
}

loc_8054BA1C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32((r28 + 40), f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 44), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = PPC_Fctiwz(f0.d);
    f0.d = PPC_Fctiwz(f2.d);
    fctiwzword0 = PPC_FprLowWordInline(f1.d);
    r5 = fctiwzword0;
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = (r5 + -1);
    MemoryInline::FlatWrite16((r30 + 4), static_cast<uint16_t>(r5));
    r3 = (r0 & 65532);
    r4 = fctiwzword1;
    MemoryInline::FlatWrite16((r30 + 6), static_cast<uint16_t>(r4));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r30 + 8), static_cast<uint16_t>(r3));
    r0 = (r0 & 65532);
    MemoryInline::FlatWrite16((r30 + 10), static_cast<uint16_t>(r0));
    goto loc_8054BAE8;
}

loc_8054BA70:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 8), r0);
    goto loc_8054BAE8;
}

loc_8054BA7C:
{
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 3888));
    r31 = 0;
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

loc_8054BAA0:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8054BAAC;
    }
}

loc_8054BAA4:
{
    r31 = 1;
    goto loc_8054BACC;
}

loc_8054BAAC:
{
}

loc_8054BAB0:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8054BACC;
    }
}

loc_8054BAB4:
{
    r0 = MemoryInline::FlatRead32((r28 + 156));
    r4 = MemoryInline::FlatRead32((r30 + 20));
    r0 = (r3 - r0);
}

loc_8054BAC4:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_8054BACC;
    }
}

loc_8054BAC8:
{
    r31 = 1;
}

loc_8054BACC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8054BAD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8054BAE0;
    }
}

loc_8054BAD4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 8), r0);
    goto loc_8054BAE8;
}

loc_8054BAE0:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r28 + 8), r0);
}

loc_8054BAE8:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    r28 = MemoryInline::FlatRead32((r1 + 48));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFBF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8054B9CC func_8054B9CC preserves=true fpr_mask=0x00000000
