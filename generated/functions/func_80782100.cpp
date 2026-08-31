#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80782100(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r5_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80782100;

loc_80782100:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r8 = 1127219200;
    r5 = 0x80380000u;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 17872);
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    f1.d = MemoryInline::FlatReadFloat64((r31 + 144));
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    r29 = r4;
    r4 = 7;
    MemoryInline::FlatWriteRam32((r1 + 48), r28);
    r28 = r3;
    r0 = MemoryInline::FlatRead32((r5 + 28432));
    r5 = 0x802A0000u;
    r6 = MemoryInline::FlatRead32((r3 + 260));
    r5 = (r5 + 16104);
    r0 = (r0 * 12);
    MemoryInline::FlatWriteRam32((r1 + 16), r8);
    r30 = MemoryInline::FlatRead32((r6 + 16));
    MemoryInline::FlatWriteRam32((r1 + 24), r8);
    r5_addr_0 = (r5 + r0);
    r0 = MemoryInline::FlatRead16(r5_addr_0);
    r3 = r30;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 0;
    r6 = MemoryInline::FlatRead16((r30 + 52));
    r5 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r7 = (r6 | 1);
    r6 = 0;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 192));
    MemoryInline::FlatWriteFloat32((r30 + 8), f1.d);
    MemoryInline::FlatWrite16((r30 + 52), static_cast<uint16_t>(r7));
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    ctx->lr = 0x8078219Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023DE7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead16((r30 + 52));
    r0 = (r3 & 8);
}

loc_807821A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807821B0;
    }
}

loc_807821A8:
{
    r0 = (r3 | 1);
    MemoryInline::FlatWrite16((r30 + 52), static_cast<uint16_t>(r0));
}

loc_807821B0:
{
    r0 = MemoryInline::FlatRead16((r30 + 52));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite16((r30 + 52), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r30 + 4));
}

loc_807821C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807821DC;
    }
}

loc_807821C8:
{
    r3 = MemoryInline::FlatRead16((r30 + 52));
    r0 = 0;
    r3 = (r3 | 1);
    MemoryInline::FlatWrite16((r30 + 52), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite32((r30 + 4), r0);
}

loc_807821DC:
{
    r0 = MemoryInline::FlatRead8((r28 + 280));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807821E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807821F4;
    }
}

loc_807821E8:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r30, r0);
    goto loc_807821FC;
}

loc_807821F4:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r30, r0);
}

loc_807821FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    MemoryInline::FlatWriteFloat32((r30 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 196));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    f3.d = MemoryInline::FlatReadFloat64((r31 + 144));
    r0 = MemoryInline::FlatRead16((r29 + 2));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r0 = MemoryInline::FlatRead16((r30 + 52));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    r3 = MemoryInline::FlatRead16(r29);
    r0 = (r0 | 1);
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 200));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = PPC_Fctiwz(f1.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    r3 = fctiwzword0;
    r3 = (r3 & 65535);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r3 = fctiwzword1;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r3 = (r3 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
    MemoryInline::FlatWrite16((r30 + 52), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r30 + 12), f1.d);
    r0 = MemoryInline::FlatRead8((r29 + 20));
    r0 = (r0 | 16);
    r0 = (r0 & 240);
    MemoryInline::FlatWrite8((r29 + 20), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    r28 = MemoryInline::FlatRead32((r1 + 48));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFE1F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFC fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80782100 func_80782100 preserves=true fpr_mask=0x00000000
