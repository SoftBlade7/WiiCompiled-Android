#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801EAA70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
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

    goto loc_801EAA70;

loc_801EAA70:
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
    r31 = (r1 + 168);
    r28 = r3;
    r29 = r4;
    r30 = 0;
    r27 = 65536;
    goto loc_801EADD8;
}

loc_801EAA9C:
{
    r5 = MemoryInline::FlatRead32((r13 + -24384));
    r4 = (r30 & 65535);
}

loc_801EAAA8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801EAAB4;
    }
}

loc_801EAAAC:
{
    r3 = (r5 + 13824);
    goto loc_801EAAB8;
}

loc_801EAAB4:
{
    r3 = 0;
}

loc_801EAAB8:
{
    r0 = MemoryInline::FlatRead16((r3 + 20));
}

loc_801EAAC0:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_801EAAD0;
    }
}

loc_801EAAC4:
{
    r0 = (r30 & 65535);
}

loc_801EAACC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_801EAAD8;
    }
}

loc_801EAAD0:
{
    r4 = -3;
    goto loc_801EAB08;
}

loc_801EAAD8:
{
}

loc_801EAADC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801EAAE8;
    }
}

loc_801EAAE0:
{
    r3 = (r5 + 13824);
    goto loc_801EAAEC;
}

loc_801EAAE8:
{
    r3 = 0;
}

loc_801EAAEC:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & 1048560);
    r4 = 0;
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 128));
}

loc_801EAB00:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801EAB08;
    }
}

loc_801EAB04:
{
    r4 = -13;
}

loc_801EAB08:
{
}

loc_801EAB0C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801EADD4;
    }
}

loc_801EAB10:
{
}

loc_801EAB14:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_801EADD4;
    }
}

loc_801EAB18:
{
}

loc_801EAB1C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801EAB28;
    }
}

loc_801EAB20:
{
    r0 = (r5 + 13824);
    goto loc_801EAB2C;
}

loc_801EAB28:
{
    r0 = 0;
}

loc_801EAB2C:
{
}

loc_801EAB30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801EAB3C;
    }
}

loc_801EAB34:
{
    r3 = -9;
    goto loc_801EAC5C;
}

loc_801EAB3C:
{
}

loc_801EAB40:
{
    r4 = (r30 & 65535);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801EAB50;
    }
}

loc_801EAB48:
{
    r3 = (r5 + 13824);
    goto loc_801EAB54;
}

loc_801EAB50:
{
    r3 = 0;
}

loc_801EAB54:
{
    r0 = MemoryInline::FlatRead16((r3 + 20));
}

loc_801EAB5C:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_801EAB6C;
    }
}

loc_801EAB60:
{
    r0 = (r30 & 65535);
}

loc_801EAB68:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_801EAB74;
    }
}

loc_801EAB6C:
{
    r3 = -3;
    goto loc_801EABA4;
}

loc_801EAB74:
{
}

loc_801EAB78:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801EAB84;
    }
}

loc_801EAB7C:
{
    r4 = (r5 + 13824);
    goto loc_801EAB88;
}

loc_801EAB84:
{
    r4 = 0;
}

loc_801EAB88:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & 1048560);
    r3 = 0;
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 128));
}

loc_801EAB9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801EABA4;
    }
}

loc_801EABA0:
{
    r3 = -13;
}

loc_801EABA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EABA8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EABB0;
    }
}

loc_801EABAC:
{
    goto loc_801EAC5C;
}

loc_801EABB0:
{
    r4 = MemoryInline::FlatRead32((r13 + -27976));
    r3 = (r1 + 8);
    r5 = 10;
    ctx->lr = 0x801EABC0u;
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

loc_801EABC4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_801EABCC;
    }
}

loc_801EABC8:
{
    goto loc_801EAC5C;
}

loc_801EABCC:
{
    r3 = MemoryInline::FlatRead32((r13 + -24384));
}

loc_801EABD4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801EABE0;
    }
}

loc_801EABD8:
{
    r3 = (r3 + 13824);
    goto loc_801EABE4;
}

loc_801EABE0:
{
    r3 = 0;
}

loc_801EABE4:
{
    r3 = MemoryInline::FlatRead16((r3 + 20));
}

loc_801EABEC:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(120))) {
        goto loc_801EABFC;
    }
}

loc_801EABF0:
{
    r0 = (r30 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_801EABF8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801EAC04;
    }
}

loc_801EABFC:
{
    r3 = -3;
    goto loc_801EAC18;
}

loc_801EAC04:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(9));
    r4 = (r4_rot_2 & 33553920);
    r3 = (r1 + 8);
    r4 = (r4 + 2048);
    r5 = 0;
    ctx->lr = 0x801EAC18u;
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

loc_801EAC18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EAC1C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EAC28;
    }
}

loc_801EAC20:
{
    r26 = r3;
    goto loc_801EAC48;
}

loc_801EAC28:
{
    r3 = r31;
    r5 = (r1 + 8);
    r4 = 512;
    ctx->lr = 0x801EAC38u;
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

loc_801EAC3C:
{
    r26 = 0;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EAC48;
    }
}

loc_801EAC44:
{
    r26 = r3;
}

loc_801EAC48:
{
    r3 = (r1 + 8);
    ctx->lr = 0x801EAC50u;
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

loc_801EAC54:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_801EAC5C;
    }
}

loc_801EAC58:
{
    r3 = r26;
}

loc_801EAC5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EAC60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EAD04;
    }
}

loc_801EAC64:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x801EAC70u;
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
}

loc_801EAC74:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801EADD4;
    }
}

loc_801EAC78:
{
    r5 = MemoryInline::FlatRead32((r13 + -24384));
    r4 = MemoryInline::FlatRead16((r1 + 168));
}

loc_801EAC84:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801EAC90;
    }
}

loc_801EAC88:
{
    r3 = (r5 + 13824);
    goto loc_801EAC94;
}

loc_801EAC90:
{
    r3 = 0;
}

loc_801EAC94:
{
    r0 = MemoryInline::FlatRead16((r3 + 20));
}

loc_801EAC9C:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_801EACA8;
    }
}

loc_801EACA0:
{
}

loc_801EACA4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(65535))) {
        goto loc_801EACB0;
    }
}

loc_801EACA8:
{
    r4 = -3;
    goto loc_801EACE0;
}

loc_801EACB0:
{
}

loc_801EACB4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801EACC0;
    }
}

loc_801EACB8:
{
    r3 = (r5 + 13824);
    goto loc_801EACC4;
}

loc_801EACC0:
{
    r3 = 0;
}

loc_801EACC4:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_7 & 1048560);
    r4 = 0;
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 128));
}

loc_801EACD8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801EACE0;
    }
}

loc_801EACDC:
{
    r4 = -13;
}

loc_801EACE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801EACE4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801EADD4;
    }
}

loc_801EACE8:
{
    r3 = r31;
    ctx->lr = 0x801EACF0u;
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
}

loc_801EACF4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_801EADD4;
    }
}

loc_801EACF8:
{
    r0 = (r27 + -1);
    MemoryInline::FlatWriteRam16((r1 + 168), static_cast<uint16_t>(r0));
    goto loc_801EADD4;
}

loc_801EAD04:
{
    r3 = MemoryInline::FlatRead32((r13 + -24384));
    r4 = (r30 & 65535);
}

loc_801EAD10:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801EAD1C;
    }
}

loc_801EAD14:
{
    r3 = (r3 + 13824);
    goto loc_801EAD20;
}

loc_801EAD1C:
{
    r3 = 0;
}

loc_801EAD20:
{
    r0 = MemoryInline::FlatRead16((r3 + 18));
}

loc_801EAD28:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_801EADD4;
    }
}

loc_801EAD2C:
{
    r0 = MemoryInline::FlatRead16((r1 + 192));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801EAD34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801EADD4;
    }
}

loc_801EAD38:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x801EAD44u;
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
}

loc_801EAD48:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801EADD4;
    }
}

loc_801EAD4C:
{
    r5 = MemoryInline::FlatRead32((r13 + -24384));
    r4 = MemoryInline::FlatRead16((r1 + 168));
}

loc_801EAD58:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801EAD64;
    }
}

loc_801EAD5C:
{
    r3 = (r5 + 13824);
    goto loc_801EAD68;
}

loc_801EAD64:
{
    r3 = 0;
}

loc_801EAD68:
{
    r0 = MemoryInline::FlatRead16((r3 + 20));
}

loc_801EAD70:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_801EAD7C;
    }
}

loc_801EAD74:
{
}

loc_801EAD78:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(65535))) {
        goto loc_801EAD84;
    }
}

loc_801EAD7C:
{
    r4 = -3;
    goto loc_801EADB4;
}

loc_801EAD84:
{
}

loc_801EAD88:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801EAD94;
    }
}

loc_801EAD8C:
{
    r3 = (r5 + 13824);
    goto loc_801EAD98;
}

loc_801EAD94:
{
    r3 = 0;
}

loc_801EAD98:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_9 & 1048560);
    r4 = 0;
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 128));
}

loc_801EADAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801EADB4;
    }
}

loc_801EADB0:
{
    r4 = -13;
}

loc_801EADB4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801EADB8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801EADD4;
    }
}

loc_801EADBC:
{
    r3 = r31;
    ctx->lr = 0x801EADC4u;
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
}

loc_801EADC8:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_801EADD4;
    }
}

loc_801EADCC:
{
    r0 = (r27 + -1);
    MemoryInline::FlatWriteRam16((r1 + 168), static_cast<uint16_t>(r0));
}

loc_801EADD4:
{
    r30 = (r30 + 1);
}

loc_801EADD8:
{
    r0 = MemoryInline::FlatRead16((r28 + 20));
    r3 = (r30 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_801EADE4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801EAA9C;
    }
}

loc_801EADE8:
{
    r11 = (r1 + 704);
    r3 = 0;
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
// RECOMP_REGISTRATION base 0x801EAA70 func_801EAA70 preserves=true fpr_mask=0x00000000
