#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80202E7C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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

    goto loc_80202E7C;

loc_80202E7C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r7 = MemoryInline::FlatRead8((r2 + -26000));
    r29 = 0;
    r0 = MemoryInline::FlatRead8((r2 + -25999));
}

loc_80202EA0:
{
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r7));
    r27 = r3;
    r28 = r4;
    r26 = r5;
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    r31 = r6;
    r30 = 1;
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    MemoryInline::FlatWriteRam16((r1 + 22), static_cast<uint16_t>(r29));
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80202ED4;
    }
}

loc_80202EC8:
{
    r0 = 1;
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
    goto loc_80202EDC;
}

loc_80202ED4:
{
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
}

loc_80202EDC:
{
    r5 = MemoryInline::FlatRead32(r4);
    r3 = r28;
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r1 + 24), r5);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    // inline leaf 0x801EF7FC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x801EF7FC
}

loc_80202F00:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80202FA8;
    }
}

loc_80202F04:
{
}

loc_80202F08:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8020302C;
    }
}

loc_80202F0C:
{
    r3 = 0x80360000u;
    r3 = (r3 + -20912);
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r0 = (r0 & 2);
}

loc_80202F20:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8020302C;
    }
}

loc_80202F24:
{
    r4 = MemoryInline::FlatRead8((r13 + -27824));
    r3 = (r1 + 24);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r1)) + static_cast<uint64_t>(static_cast<uint32_t>(24)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80202F2C:
{
    r0 = MemoryInline::FlatRead8((r13 + -27823));
    r26 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80202F48;
    }
}

loc_80202F40:
{
    r26 = 10;
    goto loc_80202F68;
}

loc_80202F48:
{
    r4 = (r1 + 8);
    r5 = 1;
    r6 = 0;
    r7 = 2;
    ctx->lr = 0x80202F5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    InvokeDirectCpu<0x801EFB40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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

loc_80202F60:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80202F68;
    }
}

loc_80202F64:
{
    r26 = 1;
}

loc_80202F68:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(1));
}

loc_80202F6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020302C;
    }
}

loc_80202F70:
{
    r3 = r27;
    r4 = (r1 + 12);
    r5 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801EF674u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_80202F84:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8020302C;
    }
}

loc_80202F88:
{
    r4 = MemoryInline::FlatRead16((r1 + 22));
    r29 = 1;
    r3 = MemoryInline::FlatRead32((r1 + 24));
    r4 = (r4 + 2);
    r0 = (r3 + 2);
    MemoryInline::FlatWriteRam16((r1 + 22), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    goto loc_8020302C;
}

loc_80202FA8:
{
    r3 = 0x80360000u;
    r3 = (r3 + -20912);
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r0 = (r0 & 2);
}

loc_80202FBC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8020302C;
    }
}

loc_80202FC0:
{
}

loc_80202FC4:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8020302C;
    }
}

loc_80202FC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_80202FCC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020302C;
    }
}

loc_80202FD0:
{
    r3 = r28;
    r4 = (r13 + -27856);
    r5 = 1;
    r6 = 0;
    r7 = 1;
    ctx->lr = 0x80202FE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    InvokeDirectCpu<0x801EFB40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80202FEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020302C;
    }
}

loc_80202FF0:
{
    r3 = r28;
    r4 = (r13 + -27852);
    r5 = 1;
    r6 = 0;
    r7 = 2;
    ctx->lr = 0x80203008u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    InvokeDirectCpu<0x801EFB40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020300C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020302C;
    }
}

loc_80203010:
{
    r3 = r28;
    r4 = 1;
    r5 = 1;
    ctx->lr = 0x80203020u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    InvokeDirectCpu<0x80204974u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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

loc_80203024:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8020302C;
    }
}

loc_80203028:
{
    r30 = 0;
}

loc_8020302C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
}

loc_80203030:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802031C8;
    }
}

loc_80203034:
{
}

loc_80203038:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80203084;
    }
}

loc_8020303C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80203040:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80203084;
    }
}

loc_80203044:
{
    r3 = r28;
    r4 = (r13 + -27848);
    ctx->lr = 0x80203050u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    InvokeDirectCpu<0x801EFA9Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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

loc_80203054:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80203084;
    }
}

loc_80203058:
{
    goto loc_80203060;
}

loc_8020305C:
{
    r27 = (r27 + 1);
}

loc_80203060:
{
    r3 = MemoryInline::FlatRead8(r27);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80203074;
    }
}

loc_8020306C:
{
}

loc_80203070:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(46))) {
        goto loc_8020305C;
    }
}

loc_80203074:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80203084;
    }
}

loc_8020307C:
{
    r3 = 1;
    goto loc_802031CC;
}

loc_80203084:
{
    r0 = MemoryInline::FlatRead16((r1 + 20));
}

loc_8020308C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80203110;
    }
}

loc_80203090:
{
    r5 = MemoryInline::FlatRead16((r1 + 22));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(522));
}

loc_80203098:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802030A4;
    }
}

loc_8020309C:
{
    r26 = 0;
    goto loc_802031A0;
}

loc_802030A4:
{
    r4 = MemoryInline::FlatRead32((r1 + 16));
    r3 = (r5 + 2);
    r0 = 0;
    r4_addr_1 = (r4 + r5);
    r4 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_802030B8:
{
    MemoryInline::FlatWriteRam16((r1 + 22), static_cast<uint16_t>(r3));
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(97))) {
        goto loc_802030CC;
    }
}

loc_802030C0:
{
}

loc_802030C4:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(122))) {
        goto loc_802030CC;
    }
}

loc_802030C8:
{
    r0 = 1;
}

loc_802030CC:
{
}

loc_802030D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802030D8;
    }
}

loc_802030D4:
{
    r4 = (r4 + -32);
}

loc_802030D8:
{
    r26 = (r4 & 65535);
}

loc_802030E0:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(65345))) {
        goto loc_802030FC;
    }
}

loc_802030E4:
{
}

loc_802030E8:
{
    if ((static_cast<uint32_t>(r26) > static_cast<uint32_t>(65370))) {
        goto loc_802030FC;
    }
}

loc_802030EC:
{
    r0 = (r26 + -32);
    r3 = 1;
    r31 = (r0 & 65535);
    goto loc_80203100;
}

loc_802030FC:
{
    r3 = 0;
}

loc_80203100:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_80203104:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802031A0;
    }
}

loc_80203108:
{
    r26 = r31;
    goto loc_802031A0;
}

loc_80203110:
{
    r6 = MemoryInline::FlatRead16((r1 + 22));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(12));
}

loc_80203118:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80203124;
    }
}

loc_8020311C:
{
    r26 = 0;
    goto loc_802031A0;
}

loc_80203124:
{
    r0 = (r6 + 1);
    r3 = 0x80360000u;
    MemoryInline::FlatWriteRam16((r1 + 22), static_cast<uint16_t>(r0));
    r3 = (r3 + -20912);
    r5 = MemoryInline::FlatRead32((r1 + 16));
    r4 = 1;
    r12 = MemoryInline::FlatRead32((r3 + 48));
    r5_addr_1 = (r5 + r6);
    r26 = MemoryInline::FlatRead8(r5_addr_1);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    ctr = r12;
    ctx->lr = 0x80203150u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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

loc_80203154:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80203178;
    }
}

loc_80203158:
{
    r4 = MemoryInline::FlatRead16((r1 + 22));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & 65280);
    r5 = MemoryInline::FlatRead32((r1 + 16));
    r3 = (r4 + 1);
    MemoryInline::FlatWriteRam16((r1 + 22), static_cast<uint16_t>(r3));
    r5_addr_2 = (r5 + r4);
    r3 = MemoryInline::FlatRead8(r5_addr_2);
    r0 = (r0 + r3);
    r26 = (r0 & 65535);
}

loc_80203178:
{
}

loc_8020317C:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(97))) {
        goto loc_80203190;
    }
}

loc_80203184:
{
}

loc_80203188:
{
    if ((static_cast<uint32_t>(r26) > static_cast<uint32_t>(122))) {
        goto loc_80203190;
    }
}

loc_8020318C:
{
    r0 = 1;
}

loc_80203190:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80203194:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020319C;
    }
}

loc_80203198:
{
    r26 = (r26 + -32);
}

loc_8020319C:
{
    r26 = (r26 & 65535);
}

loc_802031A0:
{
    r4 = MemoryInline::FlatRead16((r1 + 20));
    r3 = (r1 + 24);
    ctx->lr = 0x802031ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    InvokeDirectCpu<0x8020270Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    r0 = r3;
    r3 = (r26 & 65535);
    r4 = (r1 + 16);
    r6 = (r1 + 24);
    r5 = (r0 & 65535);
    ctx->lr = 0x802031C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    InvokeDirectCpu<0x802029C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    r30 = r3;
}

loc_802031C8:
{
    r3 = r30;
}

loc_802031CC:
{
    r11 = (r1 + 64);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
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
// RECOMP_REGISTRATION base 0x80202E7C func_80202E7C preserves=true fpr_mask=0x00000000
