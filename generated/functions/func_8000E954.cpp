#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000E954(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8000E954;

loc_8000E954:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r25);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r27);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r29);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r31);
    r27 = r4;
    r28 = r6;
    r26 = r3;
    r25 = r5;
    r4 = 0;
    r3 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800155D8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8000E984:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000E994;
    }
}

loc_8000E988:
{
    r3 = r28;
    r4 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800155D8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_8000E994:
{
    r30 = (r27 * r25);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000E9B4;
    }
}

loc_8000E99C:
{
    r0 = MemoryInline::FlatRead8((r28 + 10));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000E9A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000E9B4;
    }
}

loc_8000E9A8:
{
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
    r0 = (r0_rot_1 & 7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000E9B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000E9BC;
    }
}

loc_8000E9B4:
{
    r3 = 0;
    goto loc_8000EC48;
}

loc_8000E9BC:
{
}

loc_8000E9C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8000E9C8;
    }
}

loc_8000E9C4:
{
    // inline leaf 0x8000F630 (4 guest instruction(s))
    r3 = 0x80010000u;
    r3 = (r3 + -14008);
    MemoryInline::FlatWrite32((r13 + -27616), r3);
    // end of inlined leaf 0x8000F630
}

loc_8000E9C8:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r31 = 1;
    r4 = 0;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(13));
    r0 = (r0_rot_2 & 1);
}

loc_8000E9D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8000E9E8;
    }
}

loc_8000E9DC:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(7));
    r0 = (r0_rot_3 & 3);
}

loc_8000E9E4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8000E9EC;
    }
}

loc_8000E9E8:
{
    r4 = 1;
}

loc_8000E9EC:
{
}

loc_8000E9F0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8000EA08;
    }
}

loc_8000E9F4:
{
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r0 = (r0_rot_6 & 3);
}

loc_8000EA00:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8000EA08;
    }
}

loc_8000EA04:
{
    r31 = 0;
}

loc_8000EA08:
{
    r0 = MemoryInline::FlatRead32((r28 + 8));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & 7);
}

loc_8000EA10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8000EA64;
    }
}

loc_8000EA14:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
    r0 = (r0_rot_9 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000EA1C:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
    r0 = (r0_rot_10 & 7);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000EA64;
    }
}

loc_8000EA24:
{
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000EA28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000EA4C;
    }
}

loc_8000EA2C:
{
    r3 = r28;
    r4 = 0;
    r5 = 2;
    ctx->lr = 0x8000EA3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000C220u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
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

loc_8000EA40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000EA4C;
    }
}

loc_8000EA44:
{
    r3 = 0;
    goto loc_8000EC48;
}

loc_8000EA4C:
{
    r0 = MemoryInline::FlatRead32((r28 + 8));
    r3 = 1;
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0_mrot_1 = (r0_rot_11 & -536870912);
    r0_mdest_1 = (r0 & 536870911);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32((r28 + 8), r0);
    r3 = r28;
    // inline leaf 0x8000E434 (10 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r3 + 24));
    r0 = MemoryInline::FlatRead32((r3 + 44));
    r6 = MemoryInline::FlatRead32((r3 + 28));
    r5 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r4 & r0);
    MemoryInline::FlatWrite32((r3 + 36), r6);
    r0 = (r5 - r0);
    MemoryInline::FlatWrite32((r3 + 40), r0);
    MemoryInline::FlatWrite32((r3 + 52), r4);
    // end of inlined leaf 0x8000E434
}

loc_8000EA64:
{
    r0 = MemoryInline::FlatRead32((r28 + 8));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_13 & 7);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8000EA70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000EA8C;
    }
}

loc_8000EA74:
{
    r3 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 10), static_cast<uint8_t>(r3));
    r3 = 0;
    MemoryInline::FlatWrite32((r28 + 40), r0);
    goto loc_8000EC48;
}

loc_8000EA8C:
{
}

loc_8000EA90:
{
    r29 = 0;
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8000EBBC;
    }
}

loc_8000EA98:
{
    r3 = MemoryInline::FlatRead32((r28 + 28));
    r4 = MemoryInline::FlatRead32((r28 + 36));
}

loc_8000EAA4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r3))) {
        goto loc_8000EAB0;
    }
}

loc_8000EAA8:
{
}

loc_8000EAAC:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8000EBBC;
    }
}

loc_8000EAB0:
{
    r0 = MemoryInline::FlatRead32((r28 + 32));
    r3 = (r4 - r3);
    r0 = (r0 - r3);
    MemoryInline::FlatWrite32((r28 + 40), r0);
}

loc_8000EAC0:
{
    r5 = MemoryInline::FlatRead32((r28 + 40));
    r25 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
}

loc_8000EAD0:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r30))) {
        goto loc_8000EADC;
    }
}

loc_8000EAD4:
{
    r5 = r30;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
}

loc_8000EADC:
{
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r0 = (r0_rot_15 & 3);
}

loc_8000EAE8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8000EB18;
    }
}

loc_8000EAEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8000EAF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000EB18;
    }
}

loc_8000EAF4:
{
    r3 = r26;
    r4 = 10;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F2E8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8000EB04:
{
    r25 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8000EB18;
    }
}

loc_8000EB0C:
{
    r0 = (r3 + 1);
    r5 = (r0 - r26);
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
}

loc_8000EB18:
{
    r5 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8000EB20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000EB58;
    }
}

loc_8000EB24:
{
    r3 = MemoryInline::FlatRead32((r28 + 36));
    r4 = r26;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r3 = MemoryInline::FlatRead32((r28 + 36));
    r0 = MemoryInline::FlatRead32((r28 + 40));
    r26 = (r26 + r4);
    r3 = (r3 + r4);
    MemoryInline::FlatWrite32((r28 + 36), r3);
    r30 = (r30 - r4);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r0 - r3);
    MemoryInline::FlatWrite32((r28 + 40), r0);
}

loc_8000EB58:
{
    r0 = MemoryInline::FlatRead32((r28 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000EB60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000EB78;
    }
}

loc_8000EB64:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_8000EB68:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000EB78;
    }
}

loc_8000EB6C:
{
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r0 = (r0_rot_16 & 3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000EB74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000EBA4;
    }
}

loc_8000EB78:
{
    r3 = r28;
    r4 = 0;
    ctx->lr = 0x8000EB84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000E558u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8000EB88:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8000EBA4;
    }
}

loc_8000EB8C:
{
    r3 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 10), static_cast<uint8_t>(r3));
    r30 = 0;
    MemoryInline::FlatWrite32((r28 + 40), r0);
    goto loc_8000EBBC;
}

loc_8000EBA4:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_8000EBAC:
{
    r29 = (r29 + r0);
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8000EBBC;
    }
}

loc_8000EBB4:
{
}

loc_8000EBB8:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8000EAC0;
    }
}

loc_8000EBBC:
{
}

loc_8000EBC0:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8000EC2C;
    }
}

loc_8000EBC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8000EBC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000EC2C;
    }
}

loc_8000EBCC:
{
    r25 = MemoryInline::FlatRead32((r28 + 28));
    r0 = (r26 + r30);
    r31 = MemoryInline::FlatRead32((r28 + 32));
    r3 = r28;
    MemoryInline::FlatWrite32((r28 + 28), r26);
    r4 = (r1 + 8);
    MemoryInline::FlatWrite32((r28 + 32), r30);
    MemoryInline::FlatWrite32((r28 + 36), r0);
    ctx->lr = 0x8000EBF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000E558u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8000EBF4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8000EC0C;
    }
}

loc_8000EBF8:
{
    r3 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 10), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite32((r28 + 40), r0);
    goto loc_8000EC14;
}

loc_8000EC0C:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r29 = (r29 + r0);
}

loc_8000EC14:
{
    MemoryInline::FlatWrite32((r28 + 28), r25);
    r3 = r28;
    MemoryInline::FlatWrite32((r28 + 32), r31);
    // inline leaf 0x8000E434 (10 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r3 + 24));
    r0 = MemoryInline::FlatRead32((r3 + 44));
    r6 = MemoryInline::FlatRead32((r3 + 28));
    r5 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r4 & r0);
    MemoryInline::FlatWrite32((r3 + 36), r6);
    r0 = (r5 - r0);
    MemoryInline::FlatWrite32((r3 + 40), r0);
    MemoryInline::FlatWrite32((r3 + 52), r4);
    // end of inlined leaf 0x8000E434
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 40), r0);
}

loc_8000EC2C:
{
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r0 = (r0_rot_20 & 3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8000EC38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000EC44;
    }
}

loc_8000EC3C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 40), r0);
}

loc_8000EC44:
{
    r3 = PPC_Divwu(static_cast<uint32_t>(r29), static_cast<uint32_t>(r27));
}

loc_8000EC48:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 20));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 28));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 36));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 40));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 44));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
// RECOMP_REGISTRATION base 0x8000E954 func_8000E954 preserves=true fpr_mask=0x00000000
