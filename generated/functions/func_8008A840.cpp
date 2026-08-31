#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008A840(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_14 = 0;
    uint32_t r3_rot_15 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_10 = 0;
    uint32_t r4_rot_11 = 0;
    uint32_t r4_rot_12 = 0;
    uint32_t r4_rot_13 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
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
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8008A840;

loc_8008A840:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r31 = r8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32(r26);
    r25 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8008A87C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008A888;
    }
}

loc_8008A880:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_8008ABDC;
}

loc_8008A888:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r31));
}

loc_8008A88C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8008A97C;
    }
}

loc_8008A890:
{
    ctx->lr = 0x8008A894u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800887F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    // inline leaf 0x80088EB0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80088EB0
}

loc_8008A89C:
{
    r6 = MemoryInline::FlatRead32((r26 + 20));
    r0 = r3;
    r27 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8008A8B0;
    }
}

loc_8008A8AC:
{
    r0 = (r3 + -2147483648);
}

loc_8008A8B0:
{
}

loc_8008A8B4:
{
    r4 = 0;
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(3))) {
        goto loc_8008A8D0;
    }
}

loc_8008A8BC:
{
}

loc_8008A8C0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(2))) {
        goto loc_8008A8DC;
    }
}

loc_8008A8C4:
{
}

loc_8008A8C8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(1))) {
        goto loc_8008A8E4;
    }
}

loc_8008A8CC:
{
    goto loc_8008A8E8;
}

loc_8008A8D0:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & -2);
    r4 = (r4 + 2);
    goto loc_8008A8E8;
}

loc_8008A8DC:
{
    r4 = r0;
    goto loc_8008A8E8;
}

loc_8008A8E4:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r4 = (r4_rot_1 & 2147483647);
}

loc_8008A8E8:
{
}

loc_8008A8EC:
{
    r0 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8008A8F8;
    }
}

loc_8008A8F4:
{
    r0 = (r3 + -2147483648);
}

loc_8008A8F8:
{
}

loc_8008A8FC:
{
    r5 = 0;
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(3))) {
        goto loc_8008A918;
    }
}

loc_8008A904:
{
}

loc_8008A908:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(2))) {
        goto loc_8008A924;
    }
}

loc_8008A90C:
{
}

loc_8008A910:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(1))) {
        goto loc_8008A92C;
    }
}

loc_8008A914:
{
    goto loc_8008A930;
}

loc_8008A918:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & -2);
    r5 = (r5 + 2);
    goto loc_8008A930;
}

loc_8008A924:
{
    r5 = r0;
    goto loc_8008A930;
}

loc_8008A92C:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r5 = (r5_rot_1 & 2147483647);
}

loc_8008A930:
{
}

loc_8008A934:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8008A93C;
    }
}

loc_8008A938:
{
    r3 = (r3 + -2147483648);
}

loc_8008A93C:
{
}

loc_8008A940:
{
    r8 = 0;
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(3))) {
        goto loc_8008A95C;
    }
}

loc_8008A948:
{
}

loc_8008A94C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(2))) {
        goto loc_8008A968;
    }
}

loc_8008A950:
{
}

loc_8008A954:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(1))) {
        goto loc_8008A970;
    }
}

loc_8008A958:
{
    goto loc_8008AB58;
}

loc_8008A95C:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & -2);
    r8 = (r3 + 3);
    goto loc_8008AB58;
}

loc_8008A968:
{
    r8 = (r3 + 1);
    goto loc_8008AB58;
}

loc_8008A970:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(31));
    r3 = (r3_rot_1 & 2147483647);
    r8 = (r3 + 1);
    goto loc_8008AB58;
}

loc_8008A97C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_8008A980:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008AA08;
    }
}

loc_8008A984:
{
}

loc_8008A988:
{
    r0 = MemoryInline::FlatRead32((r26 + 20));
    r3 = r28;
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8008A998;
    }
}

loc_8008A994:
{
    r3 = (r28 + -2147483648);
}

loc_8008A998:
{
}

loc_8008A99C:
{
    r5 = 0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8008A9B8;
    }
}

loc_8008A9A4:
{
}

loc_8008A9A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8008A9F4;
    }
}

loc_8008A9AC:
{
}

loc_8008A9B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8008A9FC;
    }
}

loc_8008A9B4:
{
    goto loc_8008AA58;
}

loc_8008A9B8:
{
    r4 = 613548032;
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & -2);
    r4 = (r4 + 18725);
    r5 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r30)) >> 32));
    r4 = (r30 - r5);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r4 = (r4_rot_4 & 2147483647);
    r5 = (r4 + r5);
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r4 = (r4_rot_5 & 536870911);
    r6 = (r4 * 14);
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r4 = (r4_rot_6 & -16);
    r5 = (r30 - r6);
    r3 = (r5 + r3);
    r5 = (r3 + r4);
    r5 = (r5 + 2);
    goto loc_8008AA58;
}

loc_8008A9F4:
{
    r5 = (r3 + r30);
    goto loc_8008AA58;
}

loc_8008A9FC:
{
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(31));
    r3 = (r3_rot_3 & 2147483647);
    r5 = (r3 + r30);
    goto loc_8008AA58;
}

loc_8008AA08:
{
    ctx->lr = 0x8008AA0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800887F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    // inline leaf 0x80088EB0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80088EB0
}

loc_8008AA14:
{
    r0 = MemoryInline::FlatRead32((r26 + 20));
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8008AA20;
    }
}

loc_8008AA1C:
{
    r3 = (r3 + -2147483648);
}

loc_8008AA20:
{
}

loc_8008AA24:
{
    r5 = 0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8008AA40;
    }
}

loc_8008AA2C:
{
}

loc_8008AA30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8008AA4C;
    }
}

loc_8008AA34:
{
}

loc_8008AA38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8008AA54;
    }
}

loc_8008AA3C:
{
    goto loc_8008AA58;
}

loc_8008AA40:
{
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & -2);
    r5 = (r3 + 2);
    goto loc_8008AA58;
}

loc_8008AA4C:
{
    r5 = r3;
    goto loc_8008AA58;
}

loc_8008AA54:
{
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(31));
    r5 = (r5_rot_4 & 2147483647);
}

loc_8008AA58:
{
}

loc_8008AA5C:
{
    r3 = r28;
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8008AA68;
    }
}

loc_8008AA64:
{
    r3 = (r28 + -2147483648);
}

loc_8008AA68:
{
}

loc_8008AA6C:
{
    r4 = 0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8008AA88;
    }
}

loc_8008AA74:
{
}

loc_8008AA78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8008AAC4;
    }
}

loc_8008AA7C:
{
}

loc_8008AA80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8008AACC;
    }
}

loc_8008AA84:
{
    goto loc_8008AAD4;
}

loc_8008AA88:
{
    r4 = 613548032;
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & -2);
    r4 = (r4 + 18725);
    r6 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r29)) >> 32));
    r4 = (r29 - r6);
    r4_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r4 = (r4_rot_8 & 2147483647);
    r6 = (r4 + r6);
    r4_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r4 = (r4_rot_9 & 536870911);
    r7 = (r4 * 14);
    r4_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r4 = (r4_rot_10 & -16);
    r6 = (r29 - r7);
    r3 = (r6 + r3);
    r4 = (r3 + r4);
    r4 = (r4 + 2);
    goto loc_8008AAD4;
}

loc_8008AAC4:
{
    r4 = (r3 + r29);
    goto loc_8008AAD4;
}

loc_8008AACC:
{
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(31));
    r3 = (r3_rot_7 & 2147483647);
    r4 = (r3 + r29);
}

loc_8008AAD4:
{
}

loc_8008AAD8:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8008AAE0;
    }
}

loc_8008AADC:
{
    r28 = (r28 + -2147483648);
}

loc_8008AAE0:
{
}

loc_8008AAE4:
{
    r8 = 0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8008AB00;
    }
}

loc_8008AAEC:
{
}

loc_8008AAF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8008AB40;
    }
}

loc_8008AAF4:
{
}

loc_8008AAF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8008AB4C;
    }
}

loc_8008AAFC:
{
    goto loc_8008AB58;
}

loc_8008AB00:
{
    r3 = 613548032;
    r8 = (r31 + -1);
    r3 = (r3 + 18725);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r6 = (static_cast<uint32_t>((static_cast<uint64_t>(r3) * static_cast<uint64_t>(r8)) >> 32));
    r3 = (r8 - r6);
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(31));
    r3 = (r3_rot_10 & 2147483647);
    r6 = (r3 + r6);
    r3_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r3 = (r3_rot_11 & 536870911);
    r7 = (r3 * 14);
    r3_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r3 = (r3_rot_12 & -16);
    r6 = (r8 - r7);
    r0 = (r6 + r0);
    r8 = (r0 + r3);
    r8 = (r8 + 2);
    goto loc_8008AB58;
}

loc_8008AB40:
{
    r8 = (r28 + r31);
    r8 = (r8 + -1);
    goto loc_8008AB58;
}

loc_8008AB4C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r3 = (r31 + r0);
    r8 = (r3 + -1);
}

loc_8008AB58:
{
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r27));
    r0 = MemoryInline::FlatRead32((r26 + 20));
}

loc_8008AB64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8008AB7C;
    }
}

loc_8008AB68:
{
}

loc_8008AB6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8008AB84;
    }
}

loc_8008AB70:
{
}

loc_8008AB74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8008AB8C;
    }
}

loc_8008AB78:
{
    goto loc_8008AB94;
}

loc_8008AB7C:
{
    r7 = 0;
    goto loc_8008AB98;
}

loc_8008AB84:
{
    r7 = 25;
    goto loc_8008AB98;
}

loc_8008AB8C:
{
    r7 = 10;
    goto loc_8008AB98;
}

loc_8008AB94:
{
    r7 = 0;
}

loc_8008AB98:
{
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r6 = (r6_rot_1 & 65535);
    r3_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(16));
    r3 = (r3_rot_14 & 65535);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & 65535);
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r7));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r6));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam16((r1 + 18), static_cast<uint16_t>(r8));
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 22), static_cast<uint16_t>(r4));
    r3 = MemoryInline::FlatRead32(r26);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8008ABC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008ABD4;
    }
}

loc_8008ABCC:
{
    r4 = (r1 + 8);
    ctx->lr = 0x8008ABD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80127E28u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8008ABD4:
{
    r3 = r25;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8008ABDC:
{
    r11 = (r1 + 64);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 68));
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
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8008A840 func_8008A840 preserves=true fpr_mask=0x00000000
