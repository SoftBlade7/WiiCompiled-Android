#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004F6A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8004F6A4;

loc_8004F6A4:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = (r3 + r31);
    r0 = MemoryInline::FlatRead16((r4 + 76));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8004F6B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_8004F6E4;
    }
}

loc_8004F6B8:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004F6C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004F6CC;
    }
}

loc_8004F6C4:
{
    r0 = (r3 + r0);
    goto loc_8004F6D0;
}

loc_8004F6CC:
{
    r0 = 0;
}

loc_8004F6D0:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = (r1 + 16);
    r4 = MemoryInline::FlatRead16((r4 + 76));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004E730u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    goto loc_8004F6E8;
}

loc_8004F6E4:
{
    r3 = 0;
}

loc_8004F6E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8004F6EC:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004F778;
    }
}

loc_8004F6F4:
{
    r3 = (r1 + 36);
    r4 = (r1 + 44);
    r5 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800526C0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32(r29);
    r27 = MemoryInline::FlatRead8((r1 + 8));
    r3 = (r3 + 24);
    r5 = MemoryInline::FlatRead32((r1 + 44));
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8004F71C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004F728;
    }
}

loc_8004F720:
{
    r4 = (r3 + r0);
    goto loc_8004F72C;
}

loc_8004F728:
{
    r4 = 0;
}

loc_8004F72C:
{
    r6 = (r30 + 2);
    r0 = (r30 + 11);
    r3 = (r6 * 12);
    r28 = 1;
}

loc_8004F740:
{
    r3 = (r4 + r3);
    r26 = (r3 + 50);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(25))) {
        goto loc_8004F750;
    }
}

loc_8004F74C:
{
    r28 = r6;
}

loc_8004F750:
{
    r0 = (r28 + 160);
    r3 = r26;
    r4 = (r0 & 255);
    r5 = (r5 + -2147483648);
    // inline leaf 0x8004BDC0 (11 guest instruction(s))
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r7 = (r7_rot_1 & 255);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r6 = (r6_rot_1 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r0 = (r0_rot_1 & 255);
    r8 = 8;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 12u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r3, static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 1), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 2), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 3), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 5), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x8004BDC0
    r0 = (r28 + 176);
    r5 = r27;
    r3 = (r26 + 6);
    r4 = (r0 & 255);
    // inline leaf 0x8004BDC0 (11 guest instruction(s))
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r7 = (r7_rot_2 & 255);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r6 = (r6_rot_2 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r0 = (r0_rot_2 & 255);
    r8 = 8;
    MemoryInline::WriteResolved8(guest_range_0, 6u, r3, static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 1), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 2), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 3), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r3 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r3 + 5), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x8004BDC0
}

loc_8004F778:
{
    r30 = (r30 + 1);
    r31 = (r31 + 2);
}

loc_8004F784:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(2))) {
        goto loc_8004F6A4;
    }
}

loc_8004F788:
{
    r30 = 0;
    r31 = 0;
}

loc_8004F790:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = (r3 + r31);
    r0 = MemoryInline::FlatRead16((r4 + 80));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8004F7A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_8004F7D0;
    }
}

loc_8004F7A4:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004F7AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004F7B8;
    }
}

loc_8004F7B0:
{
    r0 = (r3 + r0);
    goto loc_8004F7BC;
}

loc_8004F7B8:
{
    r0 = 0;
}

loc_8004F7BC:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = (r1 + 12);
    r4 = MemoryInline::FlatRead16((r4 + 80));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004E830u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    goto loc_8004F7D4;
}

loc_8004F7D0:
{
    r3 = 0;
}

loc_8004F7D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8004F7D8:
{
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004F864;
    }
}

loc_8004F7E0:
{
    r3 = (r1 + 32);
    r4 = (r1 + 44);
    r5 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052760u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32(r29);
    r26 = MemoryInline::FlatRead8((r1 + 8));
    r3 = (r3 + 24);
    r5 = MemoryInline::FlatRead32((r1 + 44));
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8004F808:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004F814;
    }
}

loc_8004F80C:
{
    r4 = (r3 + r0);
    goto loc_8004F818;
}

loc_8004F814:
{
    r4 = 0;
}

loc_8004F818:
{
    r6 = (r30 + 4);
    r0 = (r30 + 13);
    r3 = (r6 * 12);
    r28 = 1;
}

loc_8004F82C:
{
    r3 = (r4 + r3);
    r27 = (r3 + 50);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(25))) {
        goto loc_8004F83C;
    }
}

loc_8004F838:
{
    r28 = r6;
}

loc_8004F83C:
{
    r0 = (r28 + 160);
    r3 = r27;
    r4 = (r0 & 255);
    r5 = (r5 + -2147483648);
    // inline leaf 0x8004BDC0 (11 guest instruction(s))
    r7_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r7 = (r7_rot_5 & 255);
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r6 = (r6_rot_5 & 255);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r0 = (r0_rot_5 & 255);
    r8 = 8;
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 12u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r3, static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r3 + 1), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 2), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 3), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r3 + 5), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x8004BDC0
    r0 = (r28 + 176);
    r5 = r26;
    r3 = (r27 + 6);
    r4 = (r0 & 255);
    // inline leaf 0x8004BDC0 (11 guest instruction(s))
    r7_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r7 = (r7_rot_6 & 255);
    r6_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r6 = (r6_rot_6 & 255);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r0 = (r0_rot_6 & 255);
    r8 = 8;
    MemoryInline::WriteResolved8(guest_range_1, 6u, r3, static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r3 + 1), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r3 + 2), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r3 + 3), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r3 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r3 + 5), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x8004BDC0
}

loc_8004F864:
{
    r30 = (r30 + 1);
    r31 = (r31 + 2);
}

loc_8004F870:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(8))) {
        goto loc_8004F790;
    }
}

loc_8004F874:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = (r3 + 24);
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8004F884:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004F890;
    }
}

loc_8004F888:
{
    r3 = (r3 + r0);
    goto loc_8004F894;
}

loc_8004F890:
{
    r3 = 0;
}

loc_8004F894:
{
    r4 = 224;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A16B8u>(ctx);
    r4 = MemoryInline::FlatRead32(r29);
    r0 = MemoryInline::FlatRead32((r4 + 44));
    r3 = (r4 + 36);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004F8AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004F8B8;
    }
}

loc_8004F8B0:
{
    r3 = (r3 + r0);
    goto loc_8004F8BC;
}

loc_8004F8B8:
{
    r3 = 0;
}

loc_8004F8BC:
{
    r4 = MemoryInline::FlatRead32((r4 + 36));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A16B8u>(ctx);
    r11 = (r1 + 80);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC0001FB gpr_write=0xFC0009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004F6A4 func_8004F6A4 preserves=true fpr_mask=0x00000000
