#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80217E1C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80217E1C;

loc_80217E1C:
{
    r5 = (r12 - r6);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = (r5 ^ -2147483648);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80217E2C:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f11.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80217E74;
    }
}

loc_80217E48:
{
}

loc_80217E4C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_80217E7C;
    }
}

loc_80217E50:
{
}

loc_80217E54:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_80217E88;
    }
}

loc_80217E58:
{
}

loc_80217E5C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_80217E98;
    }
}

loc_80217E60:
{
}

loc_80217E64:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(5))) {
        goto loc_80217EAC;
    }
}

loc_80217E68:
{
}

loc_80217E6C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(6))) {
        goto loc_80217EC0;
    }
}

loc_80217E70:
{
    goto loc_80217ED8;
}

loc_80217E74:
{
    f11.d = PpcFmulsInline(f11.d, f11.d);
    goto loc_80217ED8;
}

loc_80217E7C:
{
    f11.d = PpcFmulsInline(f11.d, f11.d);
    f11.d = PpcFmulsInline(f11.d, f11.d);
    goto loc_80217ED8;
}

loc_80217E88:
{
    f11.d = PpcFmulsInline(f11.d, f11.d);
    f11.d = PpcFmulsInline(f11.d, f11.d);
    f11.d = PpcFmulsInline(f11.d, f11.d);
    goto loc_80217ED8;
}

loc_80217E98:
{
    f11.d = PpcFmulsInline(f11.d, f11.d);
    f11.d = PpcFmulsInline(f11.d, f11.d);
    f11.d = PpcFmulsInline(f11.d, f11.d);
    f11.d = PpcFmulsInline(f11.d, f11.d);
    goto loc_80217ED8;
}

loc_80217EAC:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f11.d - f0.d));
    f2.d = (-(f3.d));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f11.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    goto loc_80217ED8;
}

loc_80217EC0:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f11.d - f0.d));
    f2.d = (-(f3.d));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f11.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
}

loc_80217ED8:
{
    SetCRFloatResident(cr, 0, f11.d, f10.d);
}

loc_80217EDC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80217F08;
    }
}

loc_80217EE4:
{
    r5 = MemoryInline::FlatRead8(r8);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead8((r8 + 1));
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead8((r8 + 2));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead8((r8 + 3));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r5));
    goto loc_80218038;
}

loc_80217F08:
{
    SetCRFloatResident(cr, 0, f11.d, f0.d);
}

loc_80217F0C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80217F38;
    }
}

loc_80217F14:
{
    r5 = MemoryInline::FlatRead8(r9);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead8((r9 + 1));
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead8((r9 + 2));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead8((r9 + 3));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r5));
    goto loc_80218038;
}

loc_80217F38:
{
    r7 = MemoryInline::FlatRead8(r8);
    r5 = MemoryInline::FlatRead8(r9);
    MemoryInline::FlatWriteRam32((r1 + 12), r7);
    r5 = (r5 - r7);
    r7 = MemoryInline::FlatRead8((r8 + 1));
    r5 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    r5 = MemoryInline::FlatRead8((r9 + 1));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r5 = (r5 - r7);
    r5 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    r10 = MemoryInline::FlatRead8((r8 + 2));
    r5 = MemoryInline::FlatRead8((r9 + 2));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f9.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r7);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r5 = (r5 - r10);
    r5 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    r7 = MemoryInline::FlatRead8((r8 + 3));
    r5 = MemoryInline::FlatRead8((r9 + 3));
    f5.d = PpcFmulsInline(f11.d, f5.d);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f9.d));
    r5 = (r5 - r7);
    MemoryInline::FlatWriteRam32((r1 + 12), r10);
    r5 = (r5 ^ -2147483648);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f6.d = PpcFmulsInline(f11.d, f4.d);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f5.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f9.d));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f4.d = PpcFmulsInline(f11.d, f3.d);
    MemoryInline::FlatWriteRam32((r1 + 12), r7);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f6.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f7.d = PPC_Fctiwz(f8.d);
    f5.d = PPC_Fctiwz(f6.d);
    fctiwzword0 = PPC_FprLowWordInline(f7.d);
    f4.d = PPC_Fctiwz(f4.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f9.d));
    f2.d = PpcFmulsInline(f11.d, f2.d);
    r5 = fctiwzword0;
    fctiwzword1 = PPC_FprLowWordInline(f5.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r5));
    r5 = fctiwzword1;
    fctiwzword2 = PPC_FprLowWordInline(f4.d);
    f2.d = PPC_Fctiwz(f2.d);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r5));
    r5 = fctiwzword2;
    fctiwzword3 = PPC_FprLowWordInline(f2.d);
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r5));
    r5 = fctiwzword3;
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r5));
}

loc_80218038:
{
    r4 = (r4 + 4);
    r12 = (r12 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80217E1C;
    }
}

loc_80218044:
{
    r11 = (r1 + 96);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[11] = f11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000017FB gpr_write=0xFE001CB3 gpr_return=0x00000010 fpr_read=0x00000FFF fpr_write=0x000009FC fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80217E1C func_80217E1C preserves=true fpr_mask=0x00000000
