#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065DD3C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r19_addr_0 = 0;
    uint32_t r19_addr_1 = 0;
    uint32_t r19_addr_2 = 0;
    uint32_t r19_addr_3 = 0;
    uint32_t r19_addr_4 = 0;
    uint32_t r19_addr_5 = 0;
    uint32_t r19_addr_6 = 0;
    uint32_t r22_rot_0 = 0;
    uint32_t r22_rot_1 = 0;
    uint32_t r22_rot_2 = 0;
    uint32_t r22_rot_3 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r25_rot_3 = 0;
    uint32_t r25_rot_4 = 0;
    uint32_t r25_rot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8065DD3C;

loc_8065DD3C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r18);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r20);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r22);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r26);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r28);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r30);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r31);
    }
    r19 = r3;
    r21 = 0;
    r29 = 0x809C0000u;
    r30 = 0x809C0000u;
    r31 = 0x809C0000u;
    r27 = 1;
    r18 = 2;
}

loc_8065DD68:
{
    r5 = MemoryInline::FlatRead32((r31 + 8408));
    r28 = (r21 & 255);
    r3 = PPC_Slw(static_cast<uint32_t>(r27), static_cast<uint32_t>(r28));
    r0 = MemoryInline::FlatRead32((r5 + 10524));
    r0 = (r0 * 88);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 72));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8065E080;
    }
}

loc_8065DD8C:
{
    r0 = MemoryInline::FlatRead8((r4 + 89));
}

loc_8065DD94:
{
    if ((static_cast<uint32_t>(r21) == static_cast<uint32_t>(r0))) {
        goto loc_8065E080;
    }
}

loc_8065DD98:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(5));
    r0 = (r0_rot_2 & 8160);
    r22_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(2));
    r22 = (r22_rot_2 & 1020);
    r3 = (r5 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 10164));
    r0 = (r22 + r5);
    r3 = (r3 * 48);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 336));
    r24 = MemoryInline::FlatRead32((r3 + 24));
    r0 = MemoryInline::FlatRead32((r24 + 8));
}

loc_8065DDC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8065E080;
    }
}

loc_8065DDC8:
{
    r20 = 0;
    r23 = 0;
    goto loc_8065E048;
}

loc_8065DDD4:
{
    r4 = -1;
    r26 = 0;
    ctr = r18;
}

loc_8065DDE0:
{
    r3 = (r5 + r26);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
}

loc_8065DDEC:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_8065DE00;
    }
}

loc_8065DDF0:
{
    r4 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r20));
}

loc_8065DDF8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065DE00;
    }
}

loc_8065DDFC:
{
    goto loc_8065DEC0;
}

loc_8065DE00:
{
    r26 = (r26 + 1);
    r3 = (r5 + r26);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
}

loc_8065DE10:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_8065DE24;
    }
}

loc_8065DE14:
{
    r4 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r20));
}

loc_8065DE1C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065DE24;
    }
}

loc_8065DE20:
{
    goto loc_8065DEC0;
}

loc_8065DE24:
{
    r26 = (r26 + 1);
    r3 = (r5 + r26);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
}

loc_8065DE34:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_8065DE48;
    }
}

loc_8065DE38:
{
    r4 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r20));
}

loc_8065DE40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065DE48;
    }
}

loc_8065DE44:
{
    goto loc_8065DEC0;
}

loc_8065DE48:
{
    r26 = (r26 + 1);
    r3 = (r5 + r26);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
}

loc_8065DE58:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_8065DE6C;
    }
}

loc_8065DE5C:
{
    r4 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r20));
}

loc_8065DE64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065DE6C;
    }
}

loc_8065DE68:
{
    goto loc_8065DEC0;
}

loc_8065DE6C:
{
    r26 = (r26 + 1);
    r3 = (r5 + r26);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
}

loc_8065DE7C:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_8065DE90;
    }
}

loc_8065DE80:
{
    r4 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r20));
}

loc_8065DE88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065DE90;
    }
}

loc_8065DE8C:
{
    goto loc_8065DEC0;
}

loc_8065DE90:
{
    r26 = (r26 + 1);
    r3 = (r5 + r26);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r0));
}

loc_8065DEA0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065DEB4;
    }
}

loc_8065DEA4:
{
    r4 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r20));
}

loc_8065DEAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065DEB4;
    }
}

loc_8065DEB0:
{
    goto loc_8065DEC0;
}

loc_8065DEB4:
{
    r26 = (r26 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8065DDE0;
    }
}

loc_8065DEBC:
{
    r26 = -1;
}

loc_8065DEC0:
{
    r3 = MemoryInline::FlatRead32((r29 + 8016));
    r4 = r26;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065DED0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065E040;
    }
}

loc_8065DED4:
{
    r3 = MemoryInline::FlatRead32((r29 + 8016));
    r4 = r26;
    ctx->lr = 0x8065DEE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806548A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065DEE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065DF04;
    }
}

loc_8065DEE8:
{
    r3 = MemoryInline::FlatRead32((r29 + 8016));
    r4 = r26;
    ctx->lr = 0x8065DEF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & -8);
    r3 = (r19 + r0);
    r25 = MemoryInline::FlatRead8((r3 + 3));
    goto loc_8065DF2C;
}

loc_8065DF04:
{
    r3 = MemoryInline::FlatRead32((r29 + 8016));
    r4 = r26;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065DF14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065DF28;
    }
}

loc_8065DF18:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & -8);
    r3 = (r19 + r0);
    r25 = MemoryInline::FlatRead8((r3 + 19));
    goto loc_8065DF2C;
}

loc_8065DF28:
{
    r25 = 0;
}

loc_8065DF2C:
{
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(3));
    r3 = (r3_rot_3 & -8);
    r0 = MemoryInline::FlatRead32(r24);
    r3 = (r19 + r3);
    r5 = 8;
    r3 = (r3 + 16);
    r4 = (r0 + r23);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r29 + 8016));
    r4 = r26;
    ctx->lr = 0x8065DF54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806548A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065DF58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065DF78;
    }
}

loc_8065DF5C:
{
    r3 = MemoryInline::FlatRead32((r29 + 8016));
    r4 = r26;
    ctx->lr = 0x8065DF68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & -8);
    r3 = (r19 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 3));
    goto loc_8065DFA0;
}

loc_8065DF78:
{
    r3 = MemoryInline::FlatRead32((r29 + 8016));
    r4 = r26;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_8065DF88:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8065DF9C;
    }
}

loc_8065DF8C:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & -8);
    r3 = (r19 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 19));
    goto loc_8065DFA0;
}

loc_8065DF9C:
{
    r0 = 0;
}

loc_8065DFA0:
{
}

loc_8065DFA4:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(1))) {
        goto loc_8065E040;
    }
}

loc_8065DFA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8065DFAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065E040;
    }
}

loc_8065DFB0:
{
    r5 = MemoryInline::FlatRead32((r30 + -10448));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r31 + 8408));
    r0 = MemoryInline::FlatRead32((r5 + 32));
    r25_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r25 = (r25_rot_3 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(r3));
}

loc_8065DFCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065DFE4;
    }
}

loc_8065DFD0:
{
    r3 = MemoryInline::FlatRead32((r31 + 8408));
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(r3));
}

loc_8065DFE0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065DFFC;
    }
}

loc_8065DFE4:
{
    r3 = MemoryInline::FlatRead32((r29 + 8016));
    r4 = r26;
    ctx->lr = 0x8065DFF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_11 & -8);
    r19_addr_3 = (r19 + r0);
    r0 = MemoryInline::FlatRead8(r19_addr_3);
    goto loc_8065E024;
}

loc_8065DFFC:
{
    r3 = MemoryInline::FlatRead32((r29 + 8016));
    r4 = r26;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_8065E00C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8065E020;
    }
}

loc_8065E010:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(3));
    r0 = (r0_rot_10 & -8);
    r3 = (r19 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 16));
    goto loc_8065E024;
}

loc_8065E020:
{
    r0 = 0;
}

loc_8065E024:
{
    r3 = (r25 - r0);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r4 = (r25 - r3);
    r3 = (r19 + r0);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_14 & -8);
    MemoryInline::FlatWrite32((r3 + 160), r0);
}

loc_8065E040:
{
    r23 = (r23 + 8);
    r20 = (r20 + 1);
}

loc_8065E048:
{
    r5 = MemoryInline::FlatRead32((r31 + 8408));
    r0 = MemoryInline::FlatRead32((r5 + 10524));
    r4 = (r0 * 88);
    r3 = (r5 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 89));
}

loc_8065E060:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(r0))) {
        goto loc_8065E074;
    }
}

loc_8065E064:
{
    r0 = (r22 + r5);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 91));
    goto loc_8065E078;
}

loc_8065E074:
{
    r0 = MemoryInline::FlatRead8((r3 + 88));
}

loc_8065E078:
{
}

loc_8065E07C:
{
    if ((static_cast<uint32_t>(r20) < static_cast<uint32_t>(r0))) {
        goto loc_8065DDD4;
    }
}

loc_8065E080:
{
    r21 = (r21 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r21), static_cast<uint32_t>(12));
}

loc_8065E088:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8065DD68;
    }
}

loc_8065E08C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 64u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 8));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 16));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 24));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 40));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 48));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r1 + 56));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r1 + 60));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFC01FB gpr_write=0xFFFC01FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8065DD3C func_8065DD3C preserves=true fpr_mask=0x00000000
