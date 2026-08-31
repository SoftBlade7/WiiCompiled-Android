#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801EB900(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801EB900;

loc_801EB900:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -704), 0, 712u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -704), r1);
    r1 = (r1 + -704);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 708u, (r1 + 708), r0);
    r11 = (r1 + 704);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 680u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 680u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 684u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 688u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 688u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 692u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 696u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 696u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 700u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r7 = MemoryInline::FlatRead32((r13 + -24384));
    r27 = r3;
    r28 = r4;
    r29 = r5;
}

loc_801EB928:
{
    r30 = r6;
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801EB938;
    }
}

loc_801EB930:
{
    r0 = (r7 + 13824);
    goto loc_801EB93C;
}

loc_801EB938:
{
    r0 = 0;
}

loc_801EB93C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801EB940:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801EB94C;
    }
}

loc_801EB944:
{
    r3 = -9;
    goto loc_801EBB18;
}

loc_801EB94C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EB950:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EB95C;
    }
}

loc_801EB954:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801EB958:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801EB964;
    }
}

loc_801EB95C:
{
    r3 = -3;
    goto loc_801EBB18;
}

loc_801EB964:
{
    r3 = r27;
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801E99E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r31 = (r1 + 168);
    goto loc_801EBB0C;
}

loc_801EB978:
{
    r4 = MemoryInline::FlatRead32((r13 + -24384));
    r26 = MemoryInline::FlatRead16(r27);
}

loc_801EB984:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801EB990;
    }
}

loc_801EB988:
{
    r0 = (r4 + 13824);
    goto loc_801EB994;
}

loc_801EB990:
{
    r0 = 0;
}

loc_801EB994:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(4));
    r5 = (r5_rot_2 & 1048560);
    r3 = (r0 + r5);
    r0 = MemoryInline::FlatRead32((r3 + 128));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r0));
}

loc_801EB9A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801EBB00;
    }
}

loc_801EB9A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801EB9AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EBAF8;
    }
}

loc_801EB9B0:
{
}

loc_801EB9B4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801EB9C0;
    }
}

loc_801EB9B8:
{
    r0 = (r4 + 13824);
    goto loc_801EB9C4;
}

loc_801EB9C0:
{
    r0 = 0;
}

loc_801EB9C4:
{
}

loc_801EB9C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801EB9D4;
    }
}

loc_801EB9CC:
{
    r3 = -9;
    goto loc_801EBAE4;
}

loc_801EB9D4:
{
}

loc_801EB9D8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801EB9E4;
    }
}

loc_801EB9DC:
{
    r3 = (r4 + 13824);
    goto loc_801EB9E8;
}

loc_801EB9E4:
{
    r3 = 0;
}

loc_801EB9E8:
{
    r0 = MemoryInline::FlatRead16((r3 + 20));
}

loc_801EB9F0:
{
    if ((static_cast<uint32_t>(r26) >= static_cast<uint32_t>(r0))) {
        goto loc_801EB9FC;
    }
}

loc_801EB9F4:
{
}

loc_801EB9F8:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(65535))) {
        goto loc_801EBA04;
    }
}

loc_801EB9FC:
{
    r3 = -3;
    goto loc_801EBA30;
}

loc_801EBA04:
{
}

loc_801EBA08:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801EBA14;
    }
}

loc_801EBA0C:
{
    r0 = (r4 + 13824);
    goto loc_801EBA18;
}

loc_801EBA14:
{
    r0 = 0;
}

loc_801EBA18:
{
    r4 = (r0 + r5);
    r3 = 0;
    r0 = MemoryInline::FlatRead32((r4 + 128));
}

loc_801EBA28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801EBA30;
    }
}

loc_801EBA2C:
{
    r3 = -13;
}

loc_801EBA30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EBA34:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EBA3C;
    }
}

loc_801EBA38:
{
    goto loc_801EBAE4;
}

loc_801EBA3C:
{
    r4 = MemoryInline::FlatRead32((r13 + -27976));
    r3 = (r1 + 8);
    r5 = 10;
    ctx->lr = 0x801EBA4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DAC68u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801EBA50:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_801EBA58;
    }
}

loc_801EBA54:
{
    goto loc_801EBAE4;
}

loc_801EBA58:
{
    r3 = MemoryInline::FlatRead32((r13 + -24384));
}

loc_801EBA60:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801EBA6C;
    }
}

loc_801EBA64:
{
    r3 = (r3 + 13824);
    goto loc_801EBA70;
}

loc_801EBA6C:
{
    r3 = 0;
}

loc_801EBA70:
{
    r0 = MemoryInline::FlatRead16((r3 + 20));
}

loc_801EBA78:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(120))) {
        goto loc_801EBA84;
    }
}

loc_801EBA7C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(r0));
}

loc_801EBA80:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801EBA8C;
    }
}

loc_801EBA84:
{
    r3 = -3;
    goto loc_801EBAA0;
}

loc_801EBA8C:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(9));
    r4 = (r4_rot_2 & 33553920);
    r3 = (r1 + 8);
    r4 = (r4 + 2048);
    r5 = 0;
    ctx->lr = 0x801EBAA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DB154u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801EBAA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EBAA4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EBAB0;
    }
}

loc_801EBAA8:
{
    r26 = r3;
    goto loc_801EBAD0;
}

loc_801EBAB0:
{
    r3 = r31;
    r5 = (r1 + 8);
    r4 = 512;
    ctx->lr = 0x801EBAC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DB344u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EBAC4:
{
    r26 = 0;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EBAD0;
    }
}

loc_801EBACC:
{
    r26 = r3;
}

loc_801EBAD0:
{
    r3 = (r1 + 8);
    ctx->lr = 0x801EBAD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DAFBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801EBADC:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_801EBAE4;
    }
}

loc_801EBAE0:
{
    r3 = r26;
}

loc_801EBAE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EBAE8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801EBB00;
    }
}

loc_801EBAEC:
{
    r0 = MemoryInline::FlatRead32((r1 + 672));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r29));
}

loc_801EBAF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801EBB00;
    }
}

loc_801EBAF8:
{
    r3 = 0;
    goto loc_801EBB18;
}

loc_801EBB00:
{
    r3 = r27;
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801E99E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
}

loc_801EBB0C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EBB10:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EB978;
    }
}

loc_801EBB14:
{
    r3 = -13;
}

loc_801EBB18:
{
    r11 = (r1 + 704);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 708));
    ctx->lr = r0;
    r1 = (r1 + 704);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801EB900 func_801EB900 preserves=true fpr_mask=0x00000000
