#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801EA76C(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
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

    goto loc_801EA76C;

loc_801EA76C:
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
    r26 = 0;
    r28 = r3;
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r1 + 8), static_cast<uint16_t>(r26));
    r29 = r4;
    r30 = (r1 + 168);
    r3 = (r1 + 8);
    r31 = 0;
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801E99E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EA7A8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801EA9F0;
    }
}

loc_801EA7AC:
{
    r27 = 65536;
    goto loc_801EA9E8;
}

loc_801EA7B4:
{
}

loc_801EA7B8:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_801EA7C0;
    }
}

loc_801EA7BC:
{
    r26 = r31;
}

loc_801EA7C0:
{
    r4 = MemoryInline::FlatRead32((r13 + -24384));
    r31 = r26;
    r26 = MemoryInline::FlatRead16((r1 + 8));
}

loc_801EA7D0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801EA7DC;
    }
}

loc_801EA7D4:
{
    r0 = (r4 + 13824);
    goto loc_801EA7E0;
}

loc_801EA7DC:
{
    r0 = 0;
}

loc_801EA7E0:
{
}

loc_801EA7E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801EA7F0;
    }
}

loc_801EA7E8:
{
    r3 = -9;
    goto loc_801EA904;
}

loc_801EA7F0:
{
}

loc_801EA7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801EA800;
    }
}

loc_801EA7F8:
{
    r3 = (r4 + 13824);
    goto loc_801EA804;
}

loc_801EA800:
{
    r3 = 0;
}

loc_801EA804:
{
    r0 = MemoryInline::FlatRead16((r3 + 20));
}

loc_801EA80C:
{
    if ((static_cast<uint32_t>(r26) >= static_cast<uint32_t>(r0))) {
        goto loc_801EA818;
    }
}

loc_801EA810:
{
}

loc_801EA814:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(65535))) {
        goto loc_801EA820;
    }
}

loc_801EA818:
{
    r3 = -3;
    goto loc_801EA850;
}

loc_801EA820:
{
}

loc_801EA824:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801EA830;
    }
}

loc_801EA828:
{
    r4 = (r4 + 13824);
    goto loc_801EA834;
}

loc_801EA830:
{
    r4 = 0;
}

loc_801EA834:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & 1048560);
    r3 = 0;
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 128));
}

loc_801EA848:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801EA850;
    }
}

loc_801EA84C:
{
    r3 = -13;
}

loc_801EA850:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EA854:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EA85C;
    }
}

loc_801EA858:
{
    goto loc_801EA904;
}

loc_801EA85C:
{
    r4 = MemoryInline::FlatRead32((r13 + -27976));
    r3 = (r1 + 12);
    r5 = 10;
    ctx->lr = 0x801EA86Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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

loc_801EA870:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_801EA878;
    }
}

loc_801EA874:
{
    goto loc_801EA904;
}

loc_801EA878:
{
    r3 = MemoryInline::FlatRead32((r13 + -24384));
}

loc_801EA880:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801EA88C;
    }
}

loc_801EA884:
{
    r3 = (r3 + 13824);
    goto loc_801EA890;
}

loc_801EA88C:
{
    r3 = 0;
}

loc_801EA890:
{
    r0 = MemoryInline::FlatRead16((r3 + 20));
}

loc_801EA898:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(120))) {
        goto loc_801EA8A4;
    }
}

loc_801EA89C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(r0));
}

loc_801EA8A0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801EA8AC;
    }
}

loc_801EA8A4:
{
    r3 = -3;
    goto loc_801EA8C0;
}

loc_801EA8AC:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(9));
    r4 = (r4_rot_2 & 33553920);
    r3 = (r1 + 12);
    r4 = (r4 + 2048);
    r5 = 0;
    ctx->lr = 0x801EA8C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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

loc_801EA8C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EA8C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EA8D0;
    }
}

loc_801EA8C8:
{
    r26 = r3;
    goto loc_801EA8F0;
}

loc_801EA8D0:
{
    r3 = r30;
    r5 = (r1 + 12);
    r4 = 512;
    ctx->lr = 0x801EA8E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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

loc_801EA8E4:
{
    r26 = 0;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EA8F0;
    }
}

loc_801EA8EC:
{
    r26 = r3;
}

loc_801EA8F0:
{
    r3 = (r1 + 12);
    ctx->lr = 0x801EA8F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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

loc_801EA8FC:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_801EA904;
    }
}

loc_801EA900:
{
    r3 = r26;
}

loc_801EA904:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EA908:
{
    r26 = r3;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801EA9DC;
    }
}

loc_801EA910:
{
    r0 = MemoryInline::FlatRead8((r1 + 676));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801EA918:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EA9DC;
    }
}

loc_801EA91C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_801EA920:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801EA930;
    }
}

loc_801EA924:
{
    r0 = MemoryInline::FlatRead32((r1 + 176));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r0));
}

loc_801EA92C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801EA9DC;
    }
}

loc_801EA930:
{
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x801EA93Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801E8CF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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

loc_801EA940:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EA948;
    }
}

loc_801EA944:
{
    goto loc_801EA9D8;
}

loc_801EA948:
{
    r4 = MemoryInline::FlatRead32((r13 + -24384));
    r5 = MemoryInline::FlatRead16((r1 + 168));
}

loc_801EA954:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801EA960;
    }
}

loc_801EA958:
{
    r3 = (r4 + 13824);
    goto loc_801EA964;
}

loc_801EA960:
{
    r3 = 0;
}

loc_801EA964:
{
    r0 = MemoryInline::FlatRead16((r3 + 20));
}

loc_801EA96C:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_801EA978;
    }
}

loc_801EA970:
{
}

loc_801EA974:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(65535))) {
        goto loc_801EA980;
    }
}

loc_801EA978:
{
    r3 = -3;
    goto loc_801EA9B0;
}

loc_801EA980:
{
}

loc_801EA984:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801EA990;
    }
}

loc_801EA988:
{
    r4 = (r4 + 13824);
    goto loc_801EA994;
}

loc_801EA990:
{
    r4 = 0;
}

loc_801EA994:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & 1048560);
    r3 = 0;
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 128));
}

loc_801EA9A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801EA9B0;
    }
}

loc_801EA9AC:
{
    r3 = -13;
}

loc_801EA9B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EA9B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EA9BC;
    }
}

loc_801EA9B8:
{
    goto loc_801EA9D8;
}

loc_801EA9BC:
{
    r3 = r30;
    ctx->lr = 0x801EA9C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801EB644u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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

loc_801EA9C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EA9D0;
    }
}

loc_801EA9CC:
{
    goto loc_801EA9D8;
}

loc_801EA9D0:
{
    r0 = (r27 + -1);
    MemoryInline::FlatWriteRam16((r1 + 168), static_cast<uint16_t>(r0));
}

loc_801EA9D8:
{
    r26 = r3;
}

loc_801EA9DC:
{
    r3 = (r1 + 8);
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801E99E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_801EA9E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EA9EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EA7B4;
    }
}

loc_801EA9F0:
{
    r11 = (r1 + 704);
    r3 = r31;
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
// RECOMP_REGISTRATION base 0x801EA76C func_801EA76C preserves=true fpr_mask=0x00000000
