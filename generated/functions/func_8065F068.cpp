#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065F068(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_30 = 0;
    uint32_t r0_rot_31 = 0;
    uint32_t r0_rot_32 = 0;
    uint32_t r0_rot_33 = 0;
    uint32_t r0_rot_34 = 0;
    uint32_t r0_rot_35 = 0;
    uint32_t r0_rot_36 = 0;
    uint32_t r0_rot_37 = 0;
    uint32_t r0_rot_38 = 0;
    uint32_t r0_rot_39 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_40 = 0;
    uint32_t r0_rot_41 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_10 = 0;
    uint32_t r27_addr_11 = 0;
    uint32_t r27_addr_12 = 0;
    uint32_t r27_addr_13 = 0;
    uint32_t r27_addr_14 = 0;
    uint32_t r27_addr_15 = 0;
    uint32_t r27_addr_16 = 0;
    uint32_t r27_addr_17 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_3 = 0;
    uint32_t r27_addr_4 = 0;
    uint32_t r27_addr_5 = 0;
    uint32_t r27_addr_6 = 0;
    uint32_t r27_addr_7 = 0;
    uint32_t r27_addr_8 = 0;
    uint32_t r27_addr_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r17 = ctx->gpr[17];
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
    uint32_t xer = ctx->xer;

    goto loc_8065F068;

loc_8065F068:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r17);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r19);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r21);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r23);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r25);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r27);
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r1 + 64), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r29);
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r1 + 72), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r1 + 76), r31);
    r27 = r3;
    r29 = 0;
    r20 = 0x809C0000u;
    r23 = 1;
    r22 = 0x809C0000u;
    r24 = 0x809C0000u;
    r26 = 2;
    r25 = 20;
    r19 = 0x809C0000u;
    goto loc_8065F6AC;
}

loc_8065F0A0:
{
    r4 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r28 = (r3 & 255);
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->lr = 0x8065F0B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806548A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065F0BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065F0DC;
    }
}

loc_8065F0C0:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->lr = 0x8065F0CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r3 = (r27 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 3));
    goto loc_8065F104;
}

loc_8065F0DC:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_8065F0EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8065F100;
    }
}

loc_8065F0F0:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 2040);
    r3 = (r27 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 19));
    goto loc_8065F104;
}

loc_8065F100:
{
    r0 = 0;
}

loc_8065F104:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8065F108:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065F6A8;
    }
}

loc_8065F10C:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065F11C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065F128;
    }
}

loc_8065F120:
{
    r4 = 0;
    goto loc_8065F254;
}

loc_8065F128:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->lr = 0x8065F134u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806548A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065F138:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065F14C;
    }
}

loc_8065F13C:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & 1020);
    r3 = (r27 + r0);
    r4 = MemoryInline::FlatRead32((r3 + 112));
    goto loc_8065F254;
}

loc_8065F14C:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->lr = 0x8065F158u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r21 = r3;
    r3 = MemoryInline::FlatRead32((r22 + 8408));
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r3));
}

loc_8065F16C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065F184;
    }
}

loc_8065F170:
{
    r3 = MemoryInline::FlatRead32((r22 + 8408));
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r3));
}

loc_8065F180:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065F19C;
    }
}

loc_8065F184:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->lr = 0x8065F190u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & -8);
    r27_addr_2 = (r27 + r0);
    r4 = MemoryInline::FlatRead8(r27_addr_2);
    goto loc_8065F1C4;
}

loc_8065F19C:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_8065F1AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8065F1C0;
    }
}

loc_8065F1B0:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & 2040);
    r3 = (r27 + r0);
    r4 = MemoryInline::FlatRead8((r3 + 16));
    goto loc_8065F1C4;
}

loc_8065F1C0:
{
    r4 = 0;
}

loc_8065F1C4:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(3));
    r0 = (r0_rot_9 & 2040);
    r17 = (r27 + r0);
    r3 = (r17 + r21);
    r0 = MemoryInline::FlatRead8((r3 + 22));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8065F1D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065F250;
    }
}

loc_8065F1DC:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->lr = 0x8065F1E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806548A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065F1EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065F20C;
    }
}

loc_8065F1F0:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->lr = 0x8065F1FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_10 & -8);
    r3 = (r27 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 3));
    goto loc_8065F22C;
}

loc_8065F20C:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_8065F21C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8065F228;
    }
}

loc_8065F220:
{
    r0 = MemoryInline::FlatRead8((r17 + 19));
    goto loc_8065F22C;
}

loc_8065F228:
{
    r0 = 0;
}

loc_8065F22C:
{
}

loc_8065F230:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8065F250;
    }
}

loc_8065F234:
{
    r0 = MemoryInline::FlatRead8((r17 + 21));
    r3 = PPC_Slw(static_cast<uint32_t>(r23), static_cast<uint32_t>(r21));
    r4 = 2;
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8065F254;
    }
}

loc_8065F248:
{
    r4 = 1;
    goto loc_8065F254;
}

loc_8065F250:
{
    r4 = 0;
}

loc_8065F254:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_8065F258:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065F27C;
    }
}

loc_8065F25C:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->lr = 0x8065F268u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_14 & -8);
    r3 = (r27 + r0);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r25));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r26));
    goto loc_8065F6A8;
}

loc_8065F27C:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & 1020);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(3));
    r0 = (r0_rot_15 & 2040);
    r17 = r27;
    r18 = 0;
    r30 = (r27 + r3);
    r31 = (r27 + r0);
    goto loc_8065F3F4;
}

loc_8065F298:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r18;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065F2A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065F3EC;
    }
}

loc_8065F2AC:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r18;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065F2BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065F2C8;
    }
}

loc_8065F2C0:
{
    r4 = 0;
    goto loc_8065F3DC;
}

loc_8065F2C8:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r18;
    ctx->lr = 0x8065F2D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806548A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065F2D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065F2E4;
    }
}

loc_8065F2DC:
{
    r4 = MemoryInline::FlatRead32((r30 + 112));
    goto loc_8065F3DC;
}

loc_8065F2E4:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->lr = 0x8065F2F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r21 = r3;
    r3 = MemoryInline::FlatRead32((r22 + 8408));
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r3));
}

loc_8065F304:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065F31C;
    }
}

loc_8065F308:
{
    r3 = MemoryInline::FlatRead32((r22 + 8408));
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r3));
}

loc_8065F318:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065F334;
    }
}

loc_8065F31C:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->lr = 0x8065F328u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_17 & -8);
    r27_addr_6 = (r27 + r0);
    r4 = MemoryInline::FlatRead8(r27_addr_6);
    goto loc_8065F354;
}

loc_8065F334:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_8065F344:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8065F350;
    }
}

loc_8065F348:
{
    r4 = MemoryInline::FlatRead8((r31 + 16));
    goto loc_8065F354;
}

loc_8065F350:
{
    r4 = 0;
}

loc_8065F354:
{
    r3 = (r17 + r21);
    r0 = MemoryInline::FlatRead8((r3 + 22));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8065F360:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065F3D8;
    }
}

loc_8065F364:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->lr = 0x8065F370u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806548A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065F374:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065F394;
    }
}

loc_8065F378:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->lr = 0x8065F384u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_19 & -8);
    r3 = (r27 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 3));
    goto loc_8065F3B4;
}

loc_8065F394:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_8065F3A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8065F3B0;
    }
}

loc_8065F3A8:
{
    r0 = MemoryInline::FlatRead8((r31 + 19));
    goto loc_8065F3B4;
}

loc_8065F3B0:
{
    r0 = 0;
}

loc_8065F3B4:
{
}

loc_8065F3B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8065F3D8;
    }
}

loc_8065F3BC:
{
    r0 = MemoryInline::FlatRead8((r17 + 21));
    r3 = PPC_Slw(static_cast<uint32_t>(r23), static_cast<uint32_t>(r21));
    r4 = 2;
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8065F3DC;
    }
}

loc_8065F3D0:
{
    r4 = 1;
    goto loc_8065F3DC;
}

loc_8065F3D8:
{
    r4 = 0;
}

loc_8065F3DC:
{
}

loc_8065F3E0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_8065F3EC;
    }
}

loc_8065F3E4:
{
    r0 = 0;
    goto loc_8065F408;
}

loc_8065F3EC:
{
    r17 = (r17 + 8);
    r18 = (r18 + 1);
}

loc_8065F3F4:
{
    r3 = MemoryInline::FlatRead32((r24 + -10456));
    r0 = MemoryInline::FlatRead8((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r18), static_cast<uint32_t>(r0));
}

loc_8065F400:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8065F298;
    }
}

loc_8065F404:
{
    r0 = 1;
}

loc_8065F408:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8065F40C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065F480;
    }
}

loc_8065F410:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->lr = 0x8065F41Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806548A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065F420:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065F440;
    }
}

loc_8065F424:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->lr = 0x8065F430u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_25 & -8);
    r3 = (r27 + r0);
    r17 = MemoryInline::FlatRead8((r3 + 1));
    goto loc_8065F460;
}

loc_8065F440:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065F450:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065F45C;
    }
}

loc_8065F454:
{
    r17 = MemoryInline::FlatRead8((r31 + 17));
    goto loc_8065F460;
}

loc_8065F45C:
{
    r17 = 20;
}

loc_8065F460:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->lr = 0x8065F46Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_27 & -8);
    r3 = (r27 + r0);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r17));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r26));
    goto loc_8065F6A8;
}

loc_8065F480:
{
    r3 = MemoryInline::FlatRead32((r19 + -10448));
    r4 = MemoryInline::FlatRead32((r30 + 160));
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 - r4);
}

loc_8065F494:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(120))) {
        goto loc_8065F6A8;
    }
}

loc_8065F498:
{
    r17 = r27;
    r18 = 0;
    goto loc_8065F600;
}

loc_8065F4A4:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r18;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065F4B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065F5F8;
    }
}

loc_8065F4B8:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r18;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065F4C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065F4D4;
    }
}

loc_8065F4CC:
{
    r4 = 0;
    goto loc_8065F5E8;
}

loc_8065F4D4:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r18;
    ctx->lr = 0x8065F4E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806548A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065F4E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065F4F0;
    }
}

loc_8065F4E8:
{
    r4 = MemoryInline::FlatRead32((r30 + 112));
    goto loc_8065F5E8;
}

loc_8065F4F0:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->lr = 0x8065F4FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r21 = r3;
    r3 = MemoryInline::FlatRead32((r22 + 8408));
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r3));
}

loc_8065F510:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065F528;
    }
}

loc_8065F514:
{
    r3 = MemoryInline::FlatRead32((r22 + 8408));
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r3));
}

loc_8065F524:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065F540;
    }
}

loc_8065F528:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->lr = 0x8065F534u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_29 & -8);
    r27_addr_12 = (r27 + r0);
    r4 = MemoryInline::FlatRead8(r27_addr_12);
    goto loc_8065F560;
}

loc_8065F540:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_8065F550:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8065F55C;
    }
}

loc_8065F554:
{
    r4 = MemoryInline::FlatRead8((r31 + 16));
    goto loc_8065F560;
}

loc_8065F55C:
{
    r4 = 0;
}

loc_8065F560:
{
    r3 = (r17 + r21);
    r0 = MemoryInline::FlatRead8((r3 + 22));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8065F56C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065F5E4;
    }
}

loc_8065F570:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->lr = 0x8065F57Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806548A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065F580:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065F5A0;
    }
}

loc_8065F584:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->lr = 0x8065F590u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_31 & -8);
    r3 = (r27 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 3));
    goto loc_8065F5C0;
}

loc_8065F5A0:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_8065F5B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8065F5BC;
    }
}

loc_8065F5B4:
{
    r0 = MemoryInline::FlatRead8((r31 + 19));
    goto loc_8065F5C0;
}

loc_8065F5BC:
{
    r0 = 0;
}

loc_8065F5C0:
{
}

loc_8065F5C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8065F5E4;
    }
}

loc_8065F5C8:
{
    r0 = MemoryInline::FlatRead8((r17 + 21));
    r3 = PPC_Slw(static_cast<uint32_t>(r23), static_cast<uint32_t>(r21));
    r4 = 2;
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8065F5E8;
    }
}

loc_8065F5DC:
{
    r4 = 1;
    goto loc_8065F5E8;
}

loc_8065F5E4:
{
    r4 = 0;
}

loc_8065F5E8:
{
}

loc_8065F5EC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_8065F5F8;
    }
}

loc_8065F5F0:
{
    r0 = 1;
    goto loc_8065F614;
}

loc_8065F5F8:
{
    r17 = (r17 + 8);
    r18 = (r18 + 1);
}

loc_8065F600:
{
    r3 = MemoryInline::FlatRead32((r24 + -10456));
    r0 = MemoryInline::FlatRead8((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r18), static_cast<uint32_t>(r0));
}

loc_8065F60C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8065F4A4;
    }
}

loc_8065F610:
{
    r0 = 0;
}

loc_8065F614:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8065F618:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065F63C;
    }
}

loc_8065F61C:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->lr = 0x8065F628u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_37 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_37 & -8);
    r3 = (r27 + r0);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r25));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r26));
    goto loc_8065F6A8;
}

loc_8065F63C:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->lr = 0x8065F648u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806548A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065F64C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065F66C;
    }
}

loc_8065F650:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->lr = 0x8065F65Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_38 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_38 & -8);
    r3 = (r27 + r0);
    r17 = MemoryInline::FlatRead8((r3 + 1));
    goto loc_8065F68C;
}

loc_8065F66C:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065F67C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065F688;
    }
}

loc_8065F680:
{
    r17 = MemoryInline::FlatRead8((r31 + 17));
    goto loc_8065F68C;
}

loc_8065F688:
{
    r17 = 20;
}

loc_8065F68C:
{
    r3 = MemoryInline::FlatRead32((r20 + 8016));
    r4 = r28;
    ctx->lr = 0x8065F698u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_40 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_40 & -8);
    r3 = (r27 + r0);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r17));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r26));
}

loc_8065F6A8:
{
    r29 = (r29 + 1);
}

loc_8065F6AC:
{
    r3 = MemoryInline::FlatRead32((r22 + 8408));
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 88));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r0));
}

loc_8065F6C4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8065F0A0;
    }
}

loc_8065F6C8:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 68u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 20));
            r18 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 28));
            r20 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 36));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 44));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 56));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 60));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 64));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r1 + 68));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r1 + 72));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r1 + 76));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[17] = r17;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFE01FB gpr_write=0xFFFE01FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8065F068 func_8065F068 preserves=true fpr_mask=0x00000000
