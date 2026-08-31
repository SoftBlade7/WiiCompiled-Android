#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B88E4(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r0_subfic_ra_4 = 0;
    uint32_t r26_addr_0 = 0;
    uint32_t r26_addr_1 = 0;
    uint32_t r26_addr_2 = 0;
    uint32_t r26_addr_3 = 0;
    uint32_t r26_addr_4 = 0;
    uint32_t r26_addr_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801B88E4;

loc_801B88E4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -752), 0, 760u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -752), r1);
    r1 = (r1 + -752);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 756u, (r1 + 756), r0);
    r11 = (r1 + 752);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 728u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 728u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_1, 732u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 736u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 736u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_1, 740u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 744u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 744u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_1, 748u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r5 = -872415232;
    r30 = 0x80350000u;
    r3 = MemoryInline::FlatRead16((r5 + 8240));
    r28 = r4;
    r30 = (r30 + 1904);
    r6 = 0;
    r0 = (r3 & 32768);
}

loc_801B8914:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B8924;
    }
}

loc_801B8918:
{
    r0 = (r3 & 32767);
    r6 = (r6 | 1);
    MemoryInline::FlatWrite16((r5 + 8240), static_cast<uint16_t>(r0));
}

loc_801B8924:
{
    r4 = -872415232;
    r3 = MemoryInline::FlatRead16((r4 + 8244));
    r0 = (r3 & 32768);
}

loc_801B8930:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B8940;
    }
}

loc_801B8934:
{
    r0 = (r3 & 32767);
    r6 = (r6 | 2);
    MemoryInline::FlatWrite16((r4 + 8244), static_cast<uint16_t>(r0));
}

loc_801B8940:
{
    r4 = -872415232;
    r3 = MemoryInline::FlatRead16((r4 + 8248));
    r0 = (r3 & 32768);
}

loc_801B894C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B895C;
    }
}

loc_801B8950:
{
    r0 = (r3 & 32767);
    r6 = (r6 | 4);
    MemoryInline::FlatWrite16((r4 + 8248), static_cast<uint16_t>(r0));
}

loc_801B895C:
{
    r4 = -872415232;
    r3 = MemoryInline::FlatRead16((r4 + 8252));
    r0 = (r3 & 32768);
}

loc_801B8968:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B8978;
    }
}

loc_801B896C:
{
    r0 = (r3 & 32767);
    r6 = (r6 | 8);
    MemoryInline::FlatWrite16((r4 + 8252), static_cast<uint16_t>(r0));
}

loc_801B8978:
{
    r0 = (r6 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801B897C:
{
    r3 = -872415232;
    r0 = MemoryInline::FlatRead16((r3 + 8252));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B8990;
    }
}

loc_801B8988:
{
    r0 = (r6 & 8);
}

loc_801B898C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B8A08;
    }
}

loc_801B8990:
{
    r3 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A2098u>(ctx);
    r3 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A1E70u>(ctx);
    r0 = MemoryInline::FlatRead32((r13 + -24736));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801B89A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B89F4;
    }
}

loc_801B89AC:
{
    r5 = -872415232;
    r0 = MemoryInline::FlatRead16((r5 + 8236));
    r4 = (r0 & 2047);
}

loc_801B89B8:
{
    r3 = MemoryInline::FlatRead16((r5 + 8238));
    r6 = r4;
    r0 = MemoryInline::FlatRead16((r5 + 8236));
    r3 = (r3 & 2047);
    r4 = (r0 & 2047);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r4));
}

loc_801B89D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B89B8;
    }
}

loc_801B89D4:
{
    r5 = (r1 + 10);
    r6 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801BAD74u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    cr = ctx->cr;
    r12 = MemoryInline::FlatRead32((r13 + -24736));
    r3 = MemoryInline::FlatRead16((r1 + 10));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = MemoryInline::FlatRead16((r1 + 8));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    ctr = r12;
    ctx->lr = 0x801B89F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801B89F4:
{
    r3 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A2098u>(ctx);
    r3 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A1E70u>(ctx);
    goto loc_801B90DC;
}

loc_801B8A08:
{
    r4 = MemoryInline::FlatRead32((r13 + -24604));
    r3 = (r1 + 16);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r13 + -24604), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A2098u>(ctx);
    r3 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A1E70u>(ctx);
    r12 = MemoryInline::FlatRead32((r13 + -24648));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_801B8A2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B8A3C;
    }
}

loc_801B8A30:
{
    r3 = MemoryInline::FlatRead32((r13 + -24604));
    ctr = r12;
    ctx->lr = 0x801B8A3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801B8A3C:
{
    r0 = MemoryInline::FlatRead32((r13 + -24768));
}

loc_801B8A44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B8A98;
    }
}

loc_801B8A48:
{
    r3 = -872415232;
    r0 = MemoryInline::FlatRead16((r3 + 8236));
    r4 = (r0 & 2047);
}

loc_801B8A54:
{
    r0 = MemoryInline::FlatRead16((r3 + 8238));
    r5 = r4;
    r0 = MemoryInline::FlatRead16((r3 + 8236));
    r4 = (r0 & 2047);
}

loc_801B8A68:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r4))) {
        goto loc_801B8A54;
    }
}

loc_801B8A6C:
{
}

loc_801B8A70:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(1))) {
        goto loc_801B8A98;
    }
}

loc_801B8A74:
{
    r3 = MemoryInline::FlatRead32((r13 + -24660));
    r0 = MemoryInline::FlatRead16((r3 + 24));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r3 = (r3_rot_1 & 2147483647);
    r0 = (r3 + 1);
}

loc_801B8A88:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_801B8A98;
    }
}

loc_801B8A8C:
{
    r3 = MemoryInline::FlatRead32((r13 + -24772));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r13 + -24772), r0);
}

loc_801B8A98:
{
    r0 = MemoryInline::FlatRead32((r13 + -24608));
}

loc_801B8AA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B8BD4;
    }
}

loc_801B8AA4:
{
    r0 = MemoryInline::FlatRead32((r13 + -24712));
}

loc_801B8AAC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801B8B0C;
    }
}

loc_801B8AB0:
{
    r4 = -872415232;
    r0 = MemoryInline::FlatRead16((r4 + 8236));
    r7 = (r0 & 2047);
}

loc_801B8ABC:
{
    r3 = MemoryInline::FlatRead16((r4 + 8238));
    r6 = r7;
    r0 = MemoryInline::FlatRead16((r4 + 8236));
    r5 = (r3 & 2047);
    r7 = (r0 & 2047);
}

loc_801B8AD4:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r7))) {
        goto loc_801B8ABC;
    }
}

loc_801B8AD8:
{
    r6 = MemoryInline::FlatRead32((r13 + -24660));
    r4 = (r5 + -1);
    r3 = (r7 + -1);
    r0 = MemoryInline::FlatRead16((r6 + 26));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & -2);
    r3 = MemoryInline::FlatRead16((r6 + 24));
    r0 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r5 + r0);
    r0 = (r3 ^ r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
}

loc_801B8B08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B8BBC;
    }
}

loc_801B8B0C:
{
    r26 = (r30 + 0);
    r31 = -1;
    r27 = -872415232;
    goto loc_801B8B80;
}

loc_801B8B1C:
{
    r0 = MemoryInline::FlatRead32((r13 + -24704));
    r3 = MemoryInline::FlatRead32((r13 + -24700));
    r4 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
}

loc_801B8B2C:
{
    r0 = (r3 & r31);
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(32))) {
        goto loc_801B8B38;
    }
}

loc_801B8B34:
{
    goto loc_801B8B40;
}

loc_801B8B38:
{
    r3 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r4 = (r3 + 32);
}

loc_801B8B40:
{
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & -2);
    r5 = (63 - r4);
    r26_addr_2 = (r26 + r3);
    r0 = MemoryInline::FlatRead16(r26_addr_2);
    r6 = (r27 + r3);
    r4 = 1;
    r3 = 0;
    MemoryInline::FlatWrite16((r6 + 8192), static_cast<uint16_t>(r0));
    // inline leaf 0x80021A18 (9 guest instruction(s))
    r8 = (32 - r5);
    r9 = (r5 + -32);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(-32)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
    r10 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r8));
    r3 = (r3 | r10);
    r10 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r9));
    r3 = (r3 | r10);
    r4 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
    // end of inlined leaf 0x80021A18
    r0 = MemoryInline::FlatRead32((r13 + -24704));
    r5 = ~(r3 | r3);
    r3 = MemoryInline::FlatRead32((r13 + -24700));
    r4 = ~(r4 | r4);
    r0 = (r0 & r5);
    r3 = (r3 & r4);
    MemoryInline::FlatWrite32((r13 + -24700), r3);
    MemoryInline::FlatWrite32((r13 + -24704), r0);
}

loc_801B8B80:
{
    r0 = MemoryInline::FlatRead32((r13 + -24704));
    r3 = MemoryInline::FlatRead32((r13 + -24700));
    r0 = (r3 | r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801B8B1C;
    }
}

loc_801B8B90:
{
    r3 = (r30 + 240);
    r0 = MemoryInline::FlatRead32((r13 + -24668));
    r4 = MemoryInline::FlatRead32((r3 + 84));
    r5 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r6 = 1;
    MemoryInline::FlatWrite32((r13 + -24712), r5);
    MemoryInline::FlatWrite32((r13 + -24660), r4);
    MemoryInline::FlatWrite32((r13 + -24664), r3);
    MemoryInline::FlatWrite32((r13 + -24672), r0);
    goto loc_801B8BC0;
}

loc_801B8BBC:
{
    r6 = 0;
}

loc_801B8BC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_801B8BC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B8BD4;
    }
}

loc_801B8BC8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -24608), r0);
    ctx->lr = 0x801B8BD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801B3BA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801B8BD4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = -872415232;
    r0 = MemoryInline::FlatRead16((r4 + 8302));
    r26 = (r0 & 3);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r13 + -28536));
    r26 = (r26 & 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(r0));
}

loc_801B8BF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B8C00;
    }
}

loc_801B8BF8:
{
    r3 = r26;
    ctx->lr = 0x801B8C00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801BBAFCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801B8C00:
{
    MemoryInline::FlatWrite32((r13 + -28536), r26);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r5 = MemoryInline::FlatRead32((r13 + -24664));
}

loc_801B8C10:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(8))) {
        goto loc_801B8C40;
    }
}

loc_801B8C14:
{
    r4 = 0x802A0000u;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r4 = (r4 + -9728);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x801B8C2Cu:
        goto loc_801B8C2C;
        break;
    case 0x801B8C34u:
        goto loc_801B8C34;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_801B8C2C:
{
    r29 = 0;
    goto loc_801B8C40;
}

loc_801B8C34:
{
    r29 = 1;
}

loc_801B8C40:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r13 + -28532));
}

loc_801B8C4C:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(r0))) {
        goto loc_801B8D24;
    }
}

loc_801B8C50:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(5));
}

loc_801B8C54:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B8C64;
    }
}

loc_801B8C58:
{
    r3 = 1;
    ctx->lr = 0x801B8C60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801BBBA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_801B8C6C;
}

loc_801B8C64:
{
    r3 = 0;
    ctx->lr = 0x801B8C6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801BBBA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801B8C6C:
{
}

loc_801B8C70:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(1))) {
        goto loc_801B8C78;
    }
}

loc_801B8C74:
{
    goto loc_801B8CC8;
}

loc_801B8C78:
{
    r0 = MemoryInline::FlatRead32((r13 + -24624));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801B8C80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B8CA0;
    }
}

loc_801B8C84:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B8CB0;
    }
}

loc_801B8C88:
{
}

loc_801B8C8C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_801B8C94;
    }
}

loc_801B8C90:
{
    goto loc_801B8CB0;
}

loc_801B8C94:
{
    r0 = 30000;
    MemoryInline::FlatWrite32((r13 + -24756), r0);
    goto loc_801B8CB8;
}

loc_801B8CA0:
{
    r3 = 65536;
    r0 = (r3 + -20536);
    MemoryInline::FlatWrite32((r13 + -24756), r0);
    goto loc_801B8CB8;
}

loc_801B8CB0:
{
    r0 = 15000;
    MemoryInline::FlatWrite32((r13 + -24756), r0);
}

loc_801B8CB8:
{
    r3 = 65536;
    r0 = (r3 + 24464);
    MemoryInline::FlatWrite32((r13 + -24752), r0);
    goto loc_801B8D18;
}

loc_801B8CC8:
{
    r0 = MemoryInline::FlatRead32((r13 + -24624));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801B8CD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B8CF4;
    }
}

loc_801B8CD4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B8D04;
    }
}

loc_801B8CD8:
{
}

loc_801B8CDC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_801B8CE4;
    }
}

loc_801B8CE0:
{
    goto loc_801B8D04;
}

loc_801B8CE4:
{
    r3 = 65536;
    r0 = (r3 + -29536);
    MemoryInline::FlatWrite32((r13 + -24756), r0);
    goto loc_801B8D0C;
}

loc_801B8CF4:
{
    r3 = 65536;
    r0 = (r3 + -11536);
    MemoryInline::FlatWrite32((r13 + -24756), r0);
    goto loc_801B8D0C;
}

loc_801B8D04:
{
    r0 = 18000;
    MemoryInline::FlatWrite32((r13 + -24756), r0);
}

loc_801B8D0C:
{
    r3 = 131072;
    r0 = (r3 + -23072);
    MemoryInline::FlatWrite32((r13 + -24752), r0);
}

loc_801B8D18:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -24748), r0);
    MemoryInline::FlatWrite32((r13 + -24744), r0);
}

loc_801B8D24:
{
    r0 = MemoryInline::FlatRead32((r13 + -24612));
    MemoryInline::FlatWrite32((r13 + -28532), r29);
}

loc_801B8D30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B8E08;
    }
}

loc_801B8D34:
{
    r29 = 1;
    goto loc_801B8DF4;
}

loc_801B8D3C:
{
    r0 = MemoryInline::FlatRead32((r13 + -24592));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_subfic_ra_2 = r0;
    r0 = (31 - r0_subfic_ra_2);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(31) >= static_cast<uint32_t>(r0_subfic_ra_2) ? 1u : 0u) << 29);
    r26 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r0));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(16));
}

loc_801B8D50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B8DCC;
    }
}

loc_801B8D54:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B8D88;
    }
}

loc_801B8D58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(4));
}

loc_801B8D5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B8DBC;
    }
}

loc_801B8D60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B8D7C;
    }
}

loc_801B8D64:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(2));
}

loc_801B8D68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B8DB4;
    }
}

loc_801B8D6C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B8DE8;
    }
}

loc_801B8D70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(1));
}

loc_801B8D74:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B8DAC;
    }
}

loc_801B8D78:
{
    goto loc_801B8DE8;
}

loc_801B8D7C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(8));
}

loc_801B8D80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B8DC4;
    }
}

loc_801B8D84:
{
    goto loc_801B8DE8;
}

loc_801B8D88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(64));
}

loc_801B8D8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B8DDC;
    }
}

loc_801B8D90:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B8DA0;
    }
}

loc_801B8D94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(32));
}

loc_801B8D98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B8DD4;
    }
}

loc_801B8D9C:
{
    goto loc_801B8DE8;
}

loc_801B8DA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(128));
}

loc_801B8DA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B8DE4;
    }
}

loc_801B8DA8:
{
    goto loc_801B8DE8;
}

loc_801B8DAC:
{
    ctx->lr = 0x801B8DB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801BBBE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_801B8DE8;
}

loc_801B8DB4:
{
    ctx->lr = 0x801B8DB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801BBC38u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_801B8DE8;
}

loc_801B8DBC:
{
    ctx->lr = 0x801B8DC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801BBC9Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_801B8DE8;
}

loc_801B8DC4:
{
    ctx->lr = 0x801B8DC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801BBD08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_801B8DE8;
}

loc_801B8DCC:
{
    ctx->lr = 0x801B8DD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801BCC24u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_801B8DE8;
}

loc_801B8DD4:
{
    ctx->lr = 0x801B8DD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801BCC3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_801B8DE8;
}

loc_801B8DDC:
{
    ctx->lr = 0x801B8DE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801BCCB8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_801B8DE8;
}

loc_801B8DE4:
{
    ctx->lr = 0x801B8DE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801BCD4Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801B8DE8:
{
    r0 = MemoryInline::FlatRead32((r13 + -24592));
    r0 = (r0 & ~r26);
    MemoryInline::FlatWrite32((r13 + -24592), r0);
}

loc_801B8DF4:
{
    r0 = MemoryInline::FlatRead32((r13 + -24592));
}

loc_801B8DFC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801B8D3C;
    }
}

loc_801B8E00:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -24612), r0);
}

loc_801B8E08:
{
    r0 = MemoryInline::FlatRead32((r13 + -24652));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801B8E10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B8E2C;
    }
}

loc_801B8E14:
{
    r3 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A2098u>(ctx);
    r12 = MemoryInline::FlatRead32((r13 + -24652));
    r3 = MemoryInline::FlatRead32((r13 + -24604));
    ctr = r12;
    ctx->lr = 0x801B8E2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801B8E2C:
{
    r3 = (r13 + -24640);
    ctx->lr = 0x801B8E34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAAA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A2098u>(ctx);
    r3 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A1E70u>(ctx);
    r0 = MemoryInline::FlatRead32((r13 + -24764));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801B8E4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B8E74;
    }
}

loc_801B8E50:
{
    r3 = 0;
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x801B8E60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801ABA48u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801B8E64:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_801B8E74;
    }
}

loc_801B8E68:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -24764), r0);
    MemoryInline::FlatWrite32((r13 + -24748), r0);
}

loc_801B8E74:
{
    r0 = 10;
    r3 = (r30 + 328);
    ctr = r0;
}

loc_801B8E80:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_801B8E88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801B8E98;
    }
}

loc_801B8E8C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r30 + 328), r0);
    goto loc_801B8EA0;
}

loc_801B8E98:
{
    r3 = (r3 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801B8E80;
    }
}

loc_801B8EA0:
{
    r0 = MemoryInline::FlatRead32((r13 + -24628));
}

loc_801B8EA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B8F18;
    }
}

loc_801B8EAC:
{
    r0 = MemoryInline::FlatRead32((r13 + -24632));
}

loc_801B8EB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B8F18;
    }
}

loc_801B8EB8:
{
    r0 = MemoryInline::FlatRead32((r30 + 328));
}

loc_801B8EC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B8F18;
    }
}

loc_801B8EC4:
{
    r0 = MemoryInline::FlatRead32((r13 + -24616));
}

loc_801B8ECC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_801B8EEC;
    }
}

loc_801B8ED0:
{
    r3 = MemoryInline::FlatRead32((r13 + -24748));
    r0 = -1;
}

loc_801B8EDC:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_801B8EEC;
    }
}

loc_801B8EE0:
{
    r3 = MemoryInline::FlatRead32((r13 + -24748));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r13 + -24748), r0);
}

loc_801B8EEC:
{
    r0 = MemoryInline::FlatRead32((r13 + -24620));
}

loc_801B8EF4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_801B8F58;
    }
}

loc_801B8EF8:
{
    r3 = MemoryInline::FlatRead32((r13 + -24744));
    r0 = -1;
}

loc_801B8F04:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_801B8F58;
    }
}

loc_801B8F08:
{
    r3 = MemoryInline::FlatRead32((r13 + -24744));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r13 + -24744), r0);
    goto loc_801B8F58;
}

loc_801B8F18:
{
    r3 = MemoryInline::FlatRead32((r13 + -24748));
    r0 = MemoryInline::FlatRead32((r13 + -24760));
}

loc_801B8F24:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_801B8F30;
    }
}

loc_801B8F28:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -24680), r0);
}

loc_801B8F30:
{
    r3 = MemoryInline::FlatRead32((r13 + -24744));
    r0 = MemoryInline::FlatRead32((r13 + -24752));
}

loc_801B8F3C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_801B8F44;
    }
}

loc_801B8F40:
{
    // inline leaf 0x801635BC (1 guest instruction(s))
    // end of inlined leaf 0x801635BC
}

loc_801B8F44:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -24748), r0);
    MemoryInline::FlatWrite32((r13 + -24744), r0);
    r0 = MemoryInline::FlatRead32((r13 + -24756));
    MemoryInline::FlatWrite32((r13 + -24760), r0);
}

loc_801B8F58:
{
    r3 = MemoryInline::FlatRead32((r13 + -28528));
    r0 = MemoryInline::FlatRead32((r13 + -24616));
}

loc_801B8F64:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_801B8F9C;
    }
}

loc_801B8F68:
{
    r0 = MemoryInline::FlatRead32((r13 + -24616));
}

loc_801B8F70:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801B8F8C;
    }
}

loc_801B8F74:
{
    r3 = MemoryInline::FlatRead32((r13 + -24748));
    r0 = MemoryInline::FlatRead32((r13 + -24760));
}

loc_801B8F80:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_801B8F8C;
    }
}

loc_801B8F84:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -24680), r0);
}

loc_801B8F8C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -24748), r0);
    r0 = MemoryInline::FlatRead32((r13 + -24756));
    MemoryInline::FlatWrite32((r13 + -24760), r0);
}

loc_801B8F9C:
{
    r3 = MemoryInline::FlatRead32((r13 + -24748));
    r0 = MemoryInline::FlatRead32((r13 + -24760));
}

loc_801B8FA8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801B8FB4;
    }
}

loc_801B8FAC:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -24684), r0);
}

loc_801B8FB4:
{
    r0 = MemoryInline::FlatRead32((r13 + -24680));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801B8FBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B8FE4;
    }
}

loc_801B8FC0:
{
    r3 = 0;
    r4 = 2;
    r5 = 2;
    ctx->lr = 0x801B8FD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801ABA48u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801B8FD4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_801B8FE4;
    }
}

loc_801B8FD8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -24680), r0);
    MemoryInline::FlatWrite32((r13 + -24740), r0);
}

loc_801B8FE4:
{
    r0 = MemoryInline::FlatRead32((r13 + -24684));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801B8FEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B9018;
    }
}

loc_801B8FF0:
{
    r3 = 1;
    r4 = 2;
    r5 = 2;
    ctx->lr = 0x801B9000u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801ABA48u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801B9004:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_801B9018;
    }
}

loc_801B9008:
{
    r3 = 0;
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -24684), r3);
    MemoryInline::FlatWrite32((r13 + -24740), r0);
}

loc_801B9018:
{
    r3 = MemoryInline::FlatRead32((r13 + -28524));
    r0 = MemoryInline::FlatRead32((r13 + -24620));
}

loc_801B9024:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_801B9050;
    }
}

loc_801B9028:
{
    r0 = MemoryInline::FlatRead32((r13 + -24620));
}

loc_801B9030:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801B9048;
    }
}

loc_801B9034:
{
    r3 = MemoryInline::FlatRead32((r13 + -24744));
    r0 = MemoryInline::FlatRead32((r13 + -24752));
}

loc_801B9040:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_801B9048;
    }
}

loc_801B9044:
{
    // inline leaf 0x801635BC (1 guest instruction(s))
    // end of inlined leaf 0x801635BC
}

loc_801B9048:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -24744), r0);
}

loc_801B9050:
{
    r3 = MemoryInline::FlatRead32((r13 + -24744));
    r0 = MemoryInline::FlatRead32((r13 + -24752));
}

loc_801B905C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801B9070;
    }
}

loc_801B9060:
{
    r3 = 0x80340000u;
    r4 = 0;
    r3 = (r3 + 12752);
    // inline leaf 0x801635B4 (2 guest instruction(s))
    r3 = 1;
    // end of inlined leaf 0x801635B4
}

loc_801B9070:
{
    r0 = 1;
    r3 = (r30 + 328);
    MemoryInline::FlatWrite32((r13 + -24628), r0);
    MemoryInline::FlatWrite32((r13 + -24632), r0);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r0);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r0);
    }
    r5 = MemoryInline::FlatRead32((r13 + -24616));
    r4 = MemoryInline::FlatRead32((r13 + -24620));
    r3 = MemoryInline::FlatRead32((r13 + -24756));
    r0 = MemoryInline::FlatRead32((r13 + -24748));
    MemoryInline::FlatWrite32((r13 + -28528), r5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_801B90C0:
{
    MemoryInline::FlatWrite32((r13 + -28524), r4);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801B90DC;
    }
}

loc_801B90C8:
{
    r0 = MemoryInline::FlatRead32((r13 + -24740));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801B90D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B90DC;
    }
}

loc_801B90D4:
{
    r0 = MemoryInline::FlatRead32((r13 + -24756));
    MemoryInline::FlatWrite32((r13 + -24760), r0);
}

loc_801B90DC:
{
    r11 = (r1 + 752);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 756));
    ctx->lr = r0;
    r1 = (r1 + 752);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801B88E4 func_801B88E4 preserves=true fpr_mask=0x00000000
