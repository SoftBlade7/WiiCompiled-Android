#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051DFC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8051DFC0;

loc_8051DFC0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x80890000u;
    r30 = (r30 + -1208);
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r5 = 0x80000000u;
    r4 = 274857984;
    r5 = MemoryInline::FlatRead32((r5 + 248));
    r6 = (r4 + 19923);
    r7 = MemoryInline::FlatRead32((r31 + 80));
    r0 = 1127219200;
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r4 = (r4_rot_0 & 1073741823);
    r5 = MemoryInline::FlatRead32((r31 + 88));
    r4 = (static_cast<uint32_t>((static_cast<uint64_t>(r6) * static_cast<uint64_t>(r4)) >> 32));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r3 - r7);
    f1.d = MemoryInline::FlatReadFloat64((r30 + 304));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8051E018:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(26));
    r0 = (r0_rot_0 & 67108863);
    r0 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051E044;
    }
}

loc_8051E030:
{
}

loc_8051E034:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_8051E08C;
    }
}

loc_8051E038:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(2));
}

loc_8051E03C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051E0BC;
    }
}

loc_8051E040:
{
    goto loc_8051E0FC;
}

loc_8051E044:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 296));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 292));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    SetCRFloatResident(cr, 0, f3.d, f2.d);
}

loc_8051E058:
{
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite8((r31 + 84), static_cast<uint8_t>(r0));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8051E0FC;
    }
}

loc_8051E070:
{
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r4 = 1;
    r0 = 255;
    MemoryInline::FlatWrite32((r31 + 80), r3);
    MemoryInline::FlatWrite32((r31 + 88), r4);
    MemoryInline::FlatWrite8((r31 + 84), static_cast<uint8_t>(r0));
    goto loc_8051E0FC;
}

loc_8051E08C:
{
    r0 = MemoryInline::FlatRead8((r31 + 76));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8051E094:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8051E0A8;
    }
}

loc_8051E098:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 300));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_8051E0A0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8051E0FC;
    }
}

loc_8051E0A8:
{
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 80), r3);
    MemoryInline::FlatWrite32((r31 + 88), r0);
    goto loc_8051E0FC;
}

loc_8051E0BC:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 296));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 292));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    SetCRFloatResident(cr, 0, f3.d, f2.d);
}

loc_8051E0CC:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite8((r31 + 84), static_cast<uint8_t>(r0));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8051E0FC;
    }
}

loc_8051E0EC:
{
    r3 = 0;
    r0 = 3;
    MemoryInline::FlatWrite8((r31 + 84), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite32((r31 + 88), r0);
}

loc_8051E0FC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

// RECOMP_GUEST_ABI gpr_read=0xC000003B gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8051DFC0 func_8051DFC0 preserves=true fpr_mask=0x00000000
