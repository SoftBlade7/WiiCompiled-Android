#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80114B1C(CpuContext* MKW_RESTRICT ctx)
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
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_80114B1C;

loc_80114B1C:
{
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + -2112), 0, 2120u, false, true);
    MemoryInline::WriteResolved32(guest_range_5, 0u, (r1 + -2112), r1);
    r1 = (r1 + -2112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_5, 2116u, (r1 + 2116), r0);
    r11 = (r1 + 2112);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 2088u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_5, 2088u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_5, 2092u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 2096u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_5, 2096u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_5, 2100u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 2104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_5, 2104u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_5, 2108u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r31 = 0x80280000u;
    r27 = r3;
    r28 = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_80114B44:
{
    r31 = (r31 + -10440);
    r29 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801150C4;
    }
}

loc_80114B50:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r4 = MemoryInline::FlatRead32((r4 + 352));
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80114B64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80114BB4;
    }
}

loc_80114B68:
{
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_80114B70:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80114BB4;
    }
}

loc_80114B74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80114B78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80114B98;
    }
}

loc_80114B7C:
{
    r5 = MemoryInline::FlatRead32(r27);
    r3 = (r1 + 32);
    r4 = (r13 + -30224);
    r5 = MemoryInline::FlatRead32((r5 + 4));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80114B94u;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80011A2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    goto loc_80114FF0;
}

loc_80114B98:
{
    r5 = MemoryInline::FlatRead32(r27);
    r3 = (r1 + 32);
    r4 = (r13 + -30220);
    r5 = MemoryInline::FlatRead32((r5 + 4));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80114BB0u;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80011A2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    goto loc_80114FF0;
}

loc_80114BB4:
{
    r8 = MemoryInline::FlatRead32(r3);
    guest_range_0 = MemoryInline::ResolveRangeHost(r8, 0, 24u, true, false);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, r8);
}

loc_80114BC0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80114BEC;
    }
}

loc_80114BC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80114BC8:
{
    r3 = (r1 + 32);
    r4 = (r31 + 312);
    r5 = (r31 + 400);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80114BDC;
    }
}

loc_80114BD8:
{
    r5 = (r31 + 360);
}

loc_80114BDC:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r8 + 4));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80114BE8u;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80011A2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    goto loc_80114FF0;
}

loc_80114BEC:
{
}

loc_80114BF0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(3))) {
        goto loc_80114DC8;
    }
}

loc_80114BF4:
{
    r0 = MemoryInline::FlatRead32((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80114BFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80114DBC;
    }
}

loc_80114C00:
{
    r0 = 8;
}

loc_80114C08:
{
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80114C18;
    }
}

loc_80114C10:
{
    r0 = (r0 | 4);
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r0));
}

loc_80114C18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80114C1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80114C2C;
    }
}

loc_80114C20:
{
    r0 = MemoryInline::FlatRead8((r1 + 20));
    r0 = (r0 | 2);
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r0));
}

loc_80114C2C:
{
    r0 = 32;
    r30 = 0;
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r0));
    r3 = (r13 + -30232);
    MemoryInline::FlatWriteRam16((r1 + 22), static_cast<uint16_t>(r30));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r3 = (r3 & 65535);
    // inline leaf 0x801ED99C (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x801ED99C
    MemoryInline::FlatWriteRam16((r1 + 24), static_cast<uint16_t>(r3));
    r3 = (r31 + 244);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r3 = (r3 & 65535);
    // inline leaf 0x801ED99C (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x801ED99C
    MemoryInline::FlatWriteRam16((r1 + 26), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead32(r27);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // inline leaf 0x800F6450 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x800F6450
    // inline leaf 0x801ED998 (1 guest instruction(s))
    // end of inlined leaf 0x801ED998
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    r3 = (r1 + 32);
    r4 = (r1 + 20);
    r5 = 12;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 44);
    r4 = (r13 + -30232);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r13 + -30232);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r29 = (r3 + 12);
    r3 = (r13 + -30232);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = (r3 & 3);
    r4 = (4 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(4) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(4));
}

loc_80114CB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80114D1C;
    }
}

loc_80114CB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80114CBC:
{
    r0 = (r1 + 32);
    r3 = (r0 + r29);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80114D1C;
    }
}

loc_80114CC8:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80114CCC:
{
    ctr = r0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80114D08;
    }
}

loc_80114CD4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r3, static_cast<uint8_t>(r30));
    r29 = (r29 + 8);
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r3 + 1), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 2), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 3), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r3 + 4), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r3 + 5), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r3 + 6), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r3 + 7), static_cast<uint8_t>(r30));
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80114CD4;
    }
}

loc_80114D00:
{
    r4 = (r4 & 7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80114D04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80114D1C;
    }
}

loc_80114D08:
{
    ctr = r4;
}

loc_80114D0C:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r30));
    r29 = (r29 + 1);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80114D0C;
    }
}

loc_80114D1C:
{
    r3 = (r1 + 32);
    r4 = (r31 + 244);
    r3 = (r3 + r29);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r31 + 244);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r29 = (r29 + r3);
    r3 = (r31 + 244);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = (r3 & 3);
    r5 = (4 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(4) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(4));
}

loc_80114D4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80114FF0;
    }
}

loc_80114D50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80114D54:
{
    r0 = (r1 + 32);
    r4 = 0;
    r3 = (r0 + r29);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80114FF0;
    }
}

loc_80114D64:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r0 = (r0_rot_3 & 536870911);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80114D68:
{
    ctr = r0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80114DA4;
    }
}

loc_80114D70:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, r3, static_cast<uint8_t>(r4));
    r29 = (r29 + 8);
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r3 + 1), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r3 + 2), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r3 + 3), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r3 + 4), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r3 + 5), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r3 + 6), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r3 + 7), static_cast<uint8_t>(r4));
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80114D70;
    }
}

loc_80114D9C:
{
    r5 = (r5 & 7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80114DA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80114FF0;
    }
}

loc_80114DA4:
{
    ctr = r5;
}

loc_80114DA8:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
    r29 = (r29 + 1);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80114DA8;
    }
}

loc_80114DB8:
{
    goto loc_80114FF0;
}

loc_80114DBC:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 32), static_cast<uint8_t>(r0));
    goto loc_80114FF0;
}

loc_80114DC8:
{
    r0 = (r7 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80114DD0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80114FF0;
    }
}

loc_80114DD4:
{
}

loc_80114DD8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(1))) {
        goto loc_80114DEC;
    }
}

loc_80114DDC:
{
    r26 = MemoryInline::FlatRead32((r3 + 12));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 12u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r8 + 12));
            r30 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r8 + 16));
        }
    }
    goto loc_80114DF8;
}

loc_80114DEC:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 12u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r8 + 12));
            r7 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r8 + 16));
        }
    }
    r30 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r8 + 20));
}

loc_80114DF8:
{
    r0 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80114E00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80114FC8;
    }
}

loc_80114E04:
{
    r0 = 8;
}

loc_80114E0C:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80114E1C;
    }
}

loc_80114E14:
{
    r0 = (r0 | 4);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
}

loc_80114E1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80114E20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80114E30;
    }
}

loc_80114E24:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
    r0 = (r0 | 2);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
}

loc_80114E30:
{
    r0 = 16;
    r31 = 0;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r31));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r3 = (r3 & 65535);
    // inline leaf 0x801ED99C (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x801ED99C
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r3));
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r3 = (r3 & 65535);
    // inline leaf 0x801ED99C (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x801ED99C
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r3));
    r3 = r26;
    // inline leaf 0x801ED998 (1 guest instruction(s))
    // end of inlined leaf 0x801ED998
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r3 = (r1 + 32);
    r4 = (r1 + 8);
    r5 = 12;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32(r27);
    r3 = (r1 + 44);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32(r27);
    r26 = MemoryInline::FlatRead32((r3 + 4));
    r3 = r26;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r29 = (r3 + 12);
    r3 = r26;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = (r3 & 3);
    r4 = (4 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(4) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(4));
}

loc_80114EC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80114F28;
    }
}

loc_80114EC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80114EC8:
{
    r0 = (r1 + 32);
    r3 = (r0 + r29);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80114F28;
    }
}

loc_80114ED4:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
    r0 = (r0_rot_4 & 536870911);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80114ED8:
{
    ctr = r0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80114F14;
    }
}

loc_80114EE0:
{
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, r3, static_cast<uint8_t>(r31));
    r29 = (r29 + 8);
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r3 + 1), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r3 + 2), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r3 + 3), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r3 + 4), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r3 + 5), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r3 + 6), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r3 + 7), static_cast<uint8_t>(r31));
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80114EE0;
    }
}

loc_80114F0C:
{
    r4 = (r4 & 7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80114F10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80114F28;
    }
}

loc_80114F14:
{
    ctr = r4;
}

loc_80114F18:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r31));
    r29 = (r29 + 1);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80114F18;
    }
}

loc_80114F28:
{
    r3 = (r1 + 32);
    r4 = r30;
    r3 = (r3 + r29);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r29 = (r29 + r3);
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = (r3 & 3);
    r5 = (4 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(4) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(4));
}

loc_80114F58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80114FF0;
    }
}

loc_80114F5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80114F60:
{
    r0 = (r1 + 32);
    r4 = 0;
    r3 = (r0 + r29);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80114FF0;
    }
}

loc_80114F70:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r0 = (r0_rot_6 & 536870911);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80114F74:
{
    ctr = r0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80114FB0;
    }
}

loc_80114F7C:
{
    guest_range_4 = MemoryInline::ResolveRangeHost(r3, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, r3, static_cast<uint8_t>(r4));
    r29 = (r29 + 8);
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r3 + 1), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r3 + 2), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r3 + 3), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r3 + 4), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r3 + 5), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r3 + 6), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r3 + 7), static_cast<uint8_t>(r4));
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80114F7C;
    }
}

loc_80114FA8:
{
    r5 = (r5 & 7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80114FAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80114FF0;
    }
}

loc_80114FB0:
{
    ctr = r5;
}

loc_80114FB4:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
    r29 = (r29 + 1);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80114FB4;
    }
}

loc_80114FC4:
{
    goto loc_80114FF0;
}

loc_80114FC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80114FCC:
{
    r3 = (r1 + 32);
    r4 = (r31 + 444);
    r5 = (r31 + 400);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80114FE0;
    }
}

loc_80114FDC:
{
    r5 = (r31 + 360);
}

loc_80114FE0:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r8 + 4));
    r8 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80114FF0u;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80011A2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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

loc_80114FF0:
{
    r0 = MemoryInline::FlatRead32((r28 + 404));
}

loc_80114FF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80115078;
    }
}

loc_80114FFC:
{
    r0 = MemoryInline::FlatRead32((r28 + 420));
}

loc_80115004:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80115078;
    }
}

loc_80115008:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8011500C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011501C;
    }
}

loc_80115010:
{
    r3 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r29 = r3;
}

loc_8011501C:
{
    r5 = r29;
    r3 = (r28 + 84);
    r4 = (r1 + 32);
    ctx->lr = 0x8011502Cu;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801119C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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

loc_80115030:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011503C;
    }
}

loc_80115034:
{
    r3 = 0;
    goto loc_80115120;
}

loc_8011503C:
{
    r3 = r28;
    ctx->lr = 0x80115044u;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80111DE8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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

loc_80115048:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80115054;
    }
}

loc_8011504C:
{
    r3 = 0;
    goto loc_80115120;
}

loc_80115054:
{
    r3 = MemoryInline::FlatRead32((r28 + 100));
    r0 = MemoryInline::FlatRead32((r28 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80115060:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8011506C;
    }
}

loc_80115064:
{
    r3 = 2;
    goto loc_80115120;
}

loc_8011506C:
{
    r3 = (r28 + 84);
    // inline leaf 0x80111DC4 (9 guest instruction(s))
}

loc_inl8_0x80111DC4:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r4 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl8_0x80111DD4:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl8_return;
    }
}

loc_inl8_0x80111DDC:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
    goto loc_inl8_cont_80111DC4;
}

loc_inl8_return:
{
}

loc_inl8_cont_80111DC4:
{
    // end of inlined leaf 0x80111DC4
    goto loc_801150C4;
}

loc_80115078:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8011507C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011508C;
    }
}

loc_80115080:
{
    r3 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r29 = r3;
}

loc_8011508C:
{
    r3 = r28;
    r5 = r29;
    r4 = (r1 + 32);
    ctx->lr = 0x8011509Cu;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8011248Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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

loc_801150A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801150AC;
    }
}

loc_801150A4:
{
    r3 = 0;
    goto loc_80115120;
}

loc_801150AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_801150B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801150BC;
    }
}

loc_801150B4:
{
    r3 = 2;
    goto loc_80115120;
}

loc_801150BC:
{
    r3 = (r28 + 84);
    // inline leaf 0x80111DC4 (9 guest instruction(s))
}

loc_inl9_0x80111DC4:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r4 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl9_0x80111DD4:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl9_return;
    }
}

loc_inl9_0x80111DDC:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
    goto loc_inl9_cont_80111DC4;
}

loc_inl9_return:
{
}

loc_inl9_cont_80111DC4:
{
    // end of inlined leaf 0x80111DC4
}

loc_801150C4:
{
    r3 = MemoryInline::FlatRead32(r27);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801150D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801150E4;
    }
}

loc_801150D4:
{
    r3 = r27;
    r4 = r28;
    ctx->lr = 0x801150E0u;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80114474u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    goto loc_80115120;
}

loc_801150E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_801150E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801150FC;
    }
}

loc_801150EC:
{
    r3 = r27;
    r4 = r28;
    ctx->lr = 0x801150F8u;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80114620u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    goto loc_80115120;
}

loc_801150FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80115100:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80115114;
    }
}

loc_80115104:
{
    r3 = r27;
    r4 = r28;
    ctx->lr = 0x80115110u;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801147C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    goto loc_80115120;
}

loc_80115114:
{
    r3 = r27;
    r4 = r28;
    ctx->lr = 0x80115120u;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80114900u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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

loc_80115120:
{
    r11 = (r1 + 2112);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 2116));
    ctx->lr = r0;
    r1 = (r1 + 2112);
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80114B1C func_80114B1C preserves=true fpr_mask=0x00000000
