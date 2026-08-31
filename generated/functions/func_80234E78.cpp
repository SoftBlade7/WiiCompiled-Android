#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80234E78(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80234E78;

loc_80234E78:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r7 = 1127219200;
    r0 = MemoryInline::FlatRead8(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80234E88:
{
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam32((r1 + 24), r7);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -24880));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::FlatWriteRam32((r1 + 28), r5);
    r0 = MemoryInline::FlatRead8((r4 + 3));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f5.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteRam32((r1 + 32), r7);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::FlatWriteRam32((r1 + 36), r6);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f4.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f5.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f2.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    f3.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f3.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80234F94;
    }
}

loc_80234EF4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24868));
    SetCRFloatResident(cr, 0, f5.d, f0.d);
}

loc_80234EFC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80234F04;
    }
}

loc_80234F00:
{
    goto loc_80234F08;
}

loc_80234F04:
{
    f5.d = f0.d;
}

loc_80234F08:
{
    f2.d = PPC_Fctiwz(f5.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24868));
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f2.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80234F1C:
{
    r0 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80234F2C;
    }
}

loc_80234F28:
{
    goto loc_80234F30;
}

loc_80234F2C:
{
    f1.d = f0.d;
}

loc_80234F30:
{
    f2.d = PPC_Fctiwz(f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24868));
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f2.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80234F44:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80234F54;
    }
}

loc_80234F50:
{
    goto loc_80234F58;
}

loc_80234F54:
{
    f1.d = f0.d;
}

loc_80234F58:
{
    f2.d = PPC_Fctiwz(f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24868));
    MemoryInline::FlatWriteRamFloat64((r1 + 56), f2.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80234F6C:
{
    r0 = MemoryInline::FlatRead32((r1 + 60));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80234F7C;
    }
}

loc_80234F78:
{
    goto loc_80234F80;
}

loc_80234F7C:
{
    f1.d = f0.d;
}

loc_80234F80:
{
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    goto loc_80234FD4;
}

loc_80234F94:
{
    f0.d = PPC_Fctiwz(f5.d);
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    f1.d = PPC_Fctiwz(f4.d);
    f0.d = PPC_Fctiwz(f3.d);
    fctiwzword2 = PPC_FprLowWordInline(f2.d);
    r6 = fctiwzword1;
    fctiwzword3 = PPC_FprLowWordInline(f1.d);
    r5 = fctiwzword2;
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword3;
    r0 = fctiwzword4;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
}

loc_80234FD4:
{
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FF gpr_write=0x000000F3 gpr_return=0x00000010 fpr_read=0x00000027 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80234E78 func_80234E78 preserves=true fpr_mask=0x00000000
