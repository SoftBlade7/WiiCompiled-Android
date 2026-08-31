#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_805BDBD4_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_805F0DB4_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80860484_statefree(uint32_t, uint32_t, uint32_t);
extern "C" void func_805BDBD4_statefree_v0(uint32_t, uint32_t);
extern "C" void func_805F0DB4_statefree_v3(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80860484_statefree_v0(uint32_t, uint32_t);

extern "C" void func_80845510(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_42 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r24_addr_0 = 0;
    uint32_t r24_addr_1 = 0;
    uint32_t r24_addr_2 = 0;
    uint32_t r24_addr_3 = 0;
    uint32_t r24_addr_4 = 0;
    uint32_t r24_addr_5 = 0;
    uint32_t r24_addr_6 = 0;
    uint32_t r24_addr_7 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_17 = 0;
    uint32_t r3_addr_18 = 0;
    uint32_t r3_addr_19 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_20 = 0;
    uint32_t r3_addr_21 = 0;
    uint32_t r3_addr_22 = 0;
    uint32_t r3_addr_23 = 0;
    uint32_t r3_addr_24 = 0;
    uint32_t r3_addr_25 = 0;
    uint32_t r3_addr_26 = 0;
    uint32_t r3_addr_27 = 0;
    uint32_t r3_addr_28 = 0;
    uint32_t r3_addr_29 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_30 = 0;
    uint32_t r3_addr_31 = 0;
    uint32_t r3_addr_32 = 0;
    uint32_t r3_addr_33 = 0;
    uint32_t r3_addr_34 = 0;
    uint32_t r3_addr_35 = 0;
    uint32_t r3_addr_36 = 0;
    uint32_t r3_addr_37 = 0;
    uint32_t r3_addr_38 = 0;
    uint32_t r3_addr_39 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_40 = 0;
    uint32_t r3_addr_41 = 0;
    uint32_t r3_addr_42 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
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

    goto loc_80845510;

loc_80845510:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r19);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r21);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r23);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r25);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r27);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r29);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r31);
    r31 = r3;
    ctx->lr = 0x80845528u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x80837170u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 112));
    ctr = r12;
    ctx->lr = 0x8084553Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 1;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805F0DB4u) && KnownTranslatedCpuCall<0x805F0DB4u>::kAvailable && !KnownTranslatedCpuCall<0x805F0DB4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805F0DB4u>()) {
        func_805F0DB4_statefree_v3(r3, r4, xer);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
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
        InvokeDirectCpu<0x805F0DB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
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
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80845558:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(72))) {
        goto loc_8084556C;
    }
}

loc_8084555C:
{
}

loc_80845560:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(73))) {
        goto loc_8084556C;
    }
}

loc_80845564:
{
}

loc_80845568:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(74))) {
        goto loc_80845580;
    }
}

loc_8084556C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 5984));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8084557C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80845594;
    }
}

loc_80845580:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80845590:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808455A4;
    }
}

loc_80845594:
{
    r3 = MemoryInline::FlatRead32((r4 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 116));
    MemoryInline::FlatWrite32((r31 + 1772), r0);
    goto loc_808455AC;
}

loc_808455A4:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 1772), r0);
}

loc_808455AC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = MemoryInline::FlatRead32((r3 + 300));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081CD3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r4 = 0x809C0000u;
    r20 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 6536));
}

loc_808455D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_808455E4;
    }
}

loc_808455D4:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808455DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808455E4;
    }
}

loc_808455E0:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80832F98u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_808455E4:
{
    r0 = MemoryInline::FlatRead32((r31 + 1772));
}

loc_808455EC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_808455FC;
    }
}

loc_808455F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_808455F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80845E38;
    }
}

loc_808455F8:
{
    goto loc_80846A08;
}

loc_808455FC:
{
    r3 = (r31 + 36);
    r4 = 1;
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_25 & -4);
    r3_addr_25 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_25);
    // end of inlined leaf 0x805C2AC0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8084560C:
{
    r19 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8084561C;
    }
}

loc_80845614:
{
    r19 = 0;
    goto loc_8084566C;
}

loc_8084561C:
{
    r21 = 0x809C0000u;
    r21 = (r21 + 7812);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80845668;
    }
}

loc_80845628:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x80845638u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80845650;
}

loc_8084563C:
{
}

loc_80845640:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r21))) {
        goto loc_8084564C;
    }
}

loc_80845644:
{
    r0 = 1;
    goto loc_8084565C;
}

loc_8084564C:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80845650:
{
}

loc_80845654:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8084563C;
    }
}

loc_80845658:
{
    r0 = 0;
}

loc_8084565C:
{
}

loc_80845660:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80845668;
    }
}

loc_80845664:
{
    goto loc_8084566C;
}

loc_80845668:
{
    r19 = 0;
}

loc_8084566C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r19 + 128), static_cast<uint8_t>(r0));
    r3 = (r31 + 36);
    r4 = 2;
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_26 & -4);
    r3_addr_26 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_26);
    // end of inlined leaf 0x805C2AC0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80845684:
{
    r19 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80845694;
    }
}

loc_8084568C:
{
    r19 = 0;
    goto loc_808456E4;
}

loc_80845694:
{
    r21 = 0x809C0000u;
    r21 = (r21 + 7812);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808456E0;
    }
}

loc_808456A0:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x808456B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_808456C8;
}

loc_808456B4:
{
}

loc_808456B8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r21))) {
        goto loc_808456C4;
    }
}

loc_808456BC:
{
    r0 = 1;
    goto loc_808456D4;
}

loc_808456C4:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_808456C8:
{
}

loc_808456CC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808456B4;
    }
}

loc_808456D0:
{
    r0 = 0;
}

loc_808456D4:
{
}

loc_808456D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808456E0;
    }
}

loc_808456DC:
{
    goto loc_808456E4;
}

loc_808456E0:
{
    r19 = 0;
}

loc_808456E4:
{
    r25 = (r20 * 12);
    r3 = 0x808B0000u;
    r0 = 1;
    MemoryInline::FlatWrite8((r19 + 128), static_cast<uint8_t>(r0));
    r29 = 0x809C0000u;
    r26 = (r20 * 48);
    r30 = 0x809C0000u;
    r3 = (r3 + -10632);
    r23 = (r31 + r25);
    r29 = (r29 + 7812);
    r24 = (r3 + r26);
    r30 = (r30 + 7016);
    r21 = 0;
    r20 = 0x809C0000u;
    goto loc_808459FC;
}

loc_80845720:
{
    r3 = (r31 + 36);
    r4 = 1;
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_28 & -4);
    r3_addr_28 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_28);
    // end of inlined leaf 0x805C2AC0
    r4 = r21;
    r3 = (r3 + 104);
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_29 & -4);
    r3_addr_29 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_29);
    // end of inlined leaf 0x805C2AC0
    r4 = 0;
    r3 = (r3 + 104);
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_30 & -4);
    r3_addr_30 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_30);
    // end of inlined leaf 0x805C2AC0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80845748:
{
    r27 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80845758;
    }
}

loc_80845750:
{
    r27 = 0;
    goto loc_808457A0;
}

loc_80845758:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8084579C;
    }
}

loc_8084575C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x8084576Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80845784;
}

loc_80845770:
{
}

loc_80845774:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_80845780;
    }
}

loc_80845778:
{
    r0 = 1;
    goto loc_80845790;
}

loc_80845780:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80845784:
{
}

loc_80845788:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80845770;
    }
}

loc_8084578C:
{
    r0 = 0;
}

loc_80845790:
{
}

loc_80845794:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8084579C;
    }
}

loc_80845798:
{
    goto loc_808457A0;
}

loc_8084579C:
{
    r27 = 0;
}

loc_808457A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_808457A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808457B0;
    }
}

loc_808457A8:
{
    r27 = 0;
    goto loc_808457FC;
}

loc_808457B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808457F8;
    }
}

loc_808457B4:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x808457C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_808457E0;
}

loc_808457CC:
{
}

loc_808457D0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_808457DC;
    }
}

loc_808457D4:
{
    r0 = 1;
    goto loc_808457EC;
}

loc_808457DC:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_808457E0:
{
}

loc_808457E4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808457CC;
    }
}

loc_808457E8:
{
    r0 = 0;
}

loc_808457EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808457F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808457F8;
    }
}

loc_808457F4:
{
    goto loc_808457FC;
}

loc_808457F8:
{
    r27 = 0;
}

loc_808457FC:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x80845810u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    r3 = r27;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805BDBD4u) && KnownTranslatedCpuCall<0x805BDBD4u>::kAvailable && !KnownTranslatedCpuCall<0x805BDBD4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805BDBD4u>()) {
        func_805BDBD4_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
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
        InvokeDirectCpu<0x805BDBD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
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
    r3 = MemoryInline::FlatRead32((r31 + 1772));
    r4 = 0;
    r0 = (r3 * 6);
    r5 = (r23 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 1736));
}

loc_80845834:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8084584C;
    }
}

loc_80845838:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(r4));
}

loc_8084583C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8084584C;
    }
}

loc_80845840:
{
    r0 = (r3 * 24);
    r24_addr_2 = (r24 + r0);
    r22 = MemoryInline::FlatRead32(r24_addr_2);
    goto loc_80845944;
}

loc_8084584C:
{
}

loc_80845850:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80845858;
    }
}

loc_80845854:
{
    r4 = 1;
}

loc_80845858:
{
    r0 = MemoryInline::FlatRead8((r5 + 1737));
}

loc_80845860:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8084587C;
    }
}

loc_80845864:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(r4));
}

loc_80845868:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8084587C;
    }
}

loc_8084586C:
{
    r0 = (r3 * 24);
    r3 = (r24 + r0);
    r22 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_80845944;
}

loc_8084587C:
{
}

loc_80845880:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80845888;
    }
}

loc_80845884:
{
    r4 = (r4 + 1);
}

loc_80845888:
{
    r0 = MemoryInline::FlatRead8((r5 + 1738));
}

loc_80845890:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808458AC;
    }
}

loc_80845894:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(r4));
}

loc_80845898:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808458AC;
    }
}

loc_8084589C:
{
    r0 = (r3 * 24);
    r3 = (r24 + r0);
    r22 = MemoryInline::FlatRead32((r3 + 8));
    goto loc_80845944;
}

loc_808458AC:
{
}

loc_808458B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808458B8;
    }
}

loc_808458B4:
{
    r4 = (r4 + 1);
}

loc_808458B8:
{
    r0 = MemoryInline::FlatRead8((r5 + 1739));
}

loc_808458C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808458DC;
    }
}

loc_808458C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(r4));
}

loc_808458C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808458DC;
    }
}

loc_808458CC:
{
    r0 = (r3 * 24);
    r3 = (r24 + r0);
    r22 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_80845944;
}

loc_808458DC:
{
}

loc_808458E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808458E8;
    }
}

loc_808458E4:
{
    r4 = (r4 + 1);
}

loc_808458E8:
{
    r0 = MemoryInline::FlatRead8((r5 + 1740));
}

loc_808458F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8084590C;
    }
}

loc_808458F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(r4));
}

loc_808458F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8084590C;
    }
}

loc_808458FC:
{
    r0 = (r3 * 24);
    r3 = (r24 + r0);
    r22 = MemoryInline::FlatRead32((r3 + 16));
    goto loc_80845944;
}

loc_8084590C:
{
}

loc_80845910:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80845918;
    }
}

loc_80845914:
{
    r4 = (r4 + 1);
}

loc_80845918:
{
    r0 = MemoryInline::FlatRead8((r5 + 1741));
}

loc_80845920:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8084593C;
    }
}

loc_80845924:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(r4));
}

loc_80845928:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8084593C;
    }
}

loc_8084592C:
{
    r0 = (r3 * 24);
    r3 = (r24 + r0);
    r22 = MemoryInline::FlatRead32((r3 + 20));
    goto loc_80845944;
}

loc_8084593C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80845940:
{
    r22 = -1;
}

loc_80845944:
{
    r3 = r31;
    r4 = r27;
    r5 = r22;
    ctx->lr = 0x80845954u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x80847344u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(0));
}

loc_80845958:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80845990;
    }
}

loc_8084595C:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 120));
    ctr = r12;
    ctx->lr = 0x80845974u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = r27;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 100));
    ctr = r12;
    ctx->lr = 0x80845990u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
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

loc_80845990:
{
    r3 = MemoryInline::FlatRead32((r20 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80860484u) && KnownTranslatedCpuCall<0x80860484u>::kAvailable && !KnownTranslatedCpuCall<0x80860484u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80860484u>()) {
        const auto state_free_result_80860484_906F = func_80860484_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_80860484_906F[0]);
        r3 = static_cast<uint32_t>(state_free_result_80860484_906F[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
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
        InvokeDirectCpu<0x80860484u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
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
}

loc_808459A4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808459F8;
    }
}

loc_808459A8:
{
    r3 = MemoryInline::FlatRead32((r20 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 316));
}

loc_808459B8:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(r0))) {
        goto loc_808459F8;
    }
}

loc_808459BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(-1));
}

loc_808459C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808459F8;
    }
}

loc_808459C4:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = r27;
    r12 = MemoryInline::FlatRead32((r12 + 120));
    ctr = r12;
    ctx->lr = 0x808459DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = r27;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 100));
    ctr = r12;
    ctx->lr = 0x808459F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
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

loc_808459F8:
{
    r21 = (r21 + 1);
}

loc_808459FC:
{
    r0 = MemoryInline::FlatRead32((r31 + 2568));
}

loc_80845A04:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(r0))) {
        goto loc_80845720;
    }
}

loc_80845A08:
{
    r3 = 0x808B0000u;
    r29 = 0x809C0000u;
    r20 = 0x809C0000u;
    r23 = (r31 + r25);
    r3 = (r3 + -10632);
    r29 = (r29 + 7812);
    r24 = (r3 + r26);
    r20 = (r20 + 7016);
    r21 = 0;
    goto loc_80845E28;
}

loc_80845A30:
{
    r3 = (r31 + 36);
    r4 = 2;
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_32 & -4);
    r3_addr_32 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_32);
    // end of inlined leaf 0x805C2AC0
    r4 = r21;
    r3 = (r3 + 104);
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_33 & -4);
    r3_addr_33 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_33);
    // end of inlined leaf 0x805C2AC0
    r4 = 0;
    r3 = (r3 + 104);
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_34 & -4);
    r3_addr_34 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_34);
    // end of inlined leaf 0x805C2AC0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80845A58:
{
    r19 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80845A68;
    }
}

loc_80845A60:
{
    r19 = 0;
    goto loc_80845AB0;
}

loc_80845A68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80845AAC;
    }
}

loc_80845A6C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x80845A7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80845A94;
}

loc_80845A80:
{
}

loc_80845A84:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_80845A90;
    }
}

loc_80845A88:
{
    r0 = 1;
    goto loc_80845AA0;
}

loc_80845A90:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80845A94:
{
}

loc_80845A98:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80845A80;
    }
}

loc_80845A9C:
{
    r0 = 0;
}

loc_80845AA0:
{
}

loc_80845AA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80845AAC;
    }
}

loc_80845AA8:
{
    goto loc_80845AB0;
}

loc_80845AAC:
{
    r19 = 0;
}

loc_80845AB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r19), static_cast<int32_t>(0));
}

loc_80845AB4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80845AC0;
    }
}

loc_80845AB8:
{
    r19 = 0;
    goto loc_80845B0C;
}

loc_80845AC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80845B08;
    }
}

loc_80845AC4:
{
    r12 = MemoryInline::FlatRead32(r19);
    r3 = r19;
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x80845AD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80845AF0;
}

loc_80845ADC:
{
}

loc_80845AE0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r20))) {
        goto loc_80845AEC;
    }
}

loc_80845AE4:
{
    r0 = 1;
    goto loc_80845AFC;
}

loc_80845AEC:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80845AF0:
{
}

loc_80845AF4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80845ADC;
    }
}

loc_80845AF8:
{
    r0 = 0;
}

loc_80845AFC:
{
}

loc_80845B00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80845B08;
    }
}

loc_80845B04:
{
    goto loc_80845B0C;
}

loc_80845B08:
{
    r19 = 0;
}

loc_80845B0C:
{
    r3 = r19;
    r4 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805BDBD4u) && KnownTranslatedCpuCall<0x805BDBD4u>::kAvailable && !KnownTranslatedCpuCall<0x805BDBD4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805BDBD4u>()) {
        func_805BDBD4_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
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
        InvokeDirectCpu<0x805BDBD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
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
    r3 = (r31 + 36);
    r4 = 2;
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_35 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_35 & -4);
    r3_addr_35 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_35);
    // end of inlined leaf 0x805C2AC0
    r4 = r21;
    r3 = (r3 + 104);
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_36 & -4);
    r3_addr_36 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_36);
    // end of inlined leaf 0x805C2AC0
    r4 = 1;
    r3 = (r3 + 104);
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_37 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_37 & -4);
    r3_addr_37 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_37);
    // end of inlined leaf 0x805C2AC0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80845B40:
{
    r19 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80845B50;
    }
}

loc_80845B48:
{
    r19 = 0;
    goto loc_80845B98;
}

loc_80845B50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80845B94;
    }
}

loc_80845B54:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x80845B64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80845B7C;
}

loc_80845B68:
{
}

loc_80845B6C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_80845B78;
    }
}

loc_80845B70:
{
    r0 = 1;
    goto loc_80845B88;
}

loc_80845B78:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80845B7C:
{
}

loc_80845B80:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80845B68;
    }
}

loc_80845B84:
{
    r0 = 0;
}

loc_80845B88:
{
}

loc_80845B8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80845B94;
    }
}

loc_80845B90:
{
    goto loc_80845B98;
}

loc_80845B94:
{
    r19 = 0;
}

loc_80845B98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r19), static_cast<int32_t>(0));
}

loc_80845B9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80845BA8;
    }
}

loc_80845BA0:
{
    r19 = 0;
    goto loc_80845BF4;
}

loc_80845BA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80845BF0;
    }
}

loc_80845BAC:
{
    r12 = MemoryInline::FlatRead32(r19);
    r3 = r19;
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x80845BC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80845BD8;
}

loc_80845BC4:
{
}

loc_80845BC8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r20))) {
        goto loc_80845BD4;
    }
}

loc_80845BCC:
{
    r0 = 1;
    goto loc_80845BE4;
}

loc_80845BD4:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80845BD8:
{
}

loc_80845BDC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80845BC4;
    }
}

loc_80845BE0:
{
    r0 = 0;
}

loc_80845BE4:
{
}

loc_80845BE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80845BF0;
    }
}

loc_80845BEC:
{
    goto loc_80845BF4;
}

loc_80845BF0:
{
    r19 = 0;
}

loc_80845BF4:
{
    r3 = r19;
    r4 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805BDBD4u) && KnownTranslatedCpuCall<0x805BDBD4u>::kAvailable && !KnownTranslatedCpuCall<0x805BDBD4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805BDBD4u>()) {
        func_805BDBD4_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
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
        InvokeDirectCpu<0x805BDBD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
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
    r5 = MemoryInline::FlatRead32((r31 + 1772));
    r3 = 0;
    r0 = (r5 * 6);
    r4 = (r23 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 1736));
}

loc_80845C18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80845C30;
    }
}

loc_80845C1C:
{
}

loc_80845C20:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(r3))) {
        goto loc_80845C30;
    }
}

loc_80845C24:
{
    r0 = (r5 * 24);
    r24_addr_5 = (r24 + r0);
    r0 = MemoryInline::FlatRead32(r24_addr_5);
    goto loc_80845D28;
}

loc_80845C30:
{
}

loc_80845C34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80845C3C;
    }
}

loc_80845C38:
{
    r3 = 1;
}

loc_80845C3C:
{
    r0 = MemoryInline::FlatRead8((r4 + 1737));
}

loc_80845C44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80845C60;
    }
}

loc_80845C48:
{
}

loc_80845C4C:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(r3))) {
        goto loc_80845C60;
    }
}

loc_80845C50:
{
    r0 = (r5 * 24);
    r3 = (r24 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_80845D28;
}

loc_80845C60:
{
}

loc_80845C64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80845C6C;
    }
}

loc_80845C68:
{
    r3 = (r3 + 1);
}

loc_80845C6C:
{
    r0 = MemoryInline::FlatRead8((r4 + 1738));
}

loc_80845C74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80845C90;
    }
}

loc_80845C78:
{
}

loc_80845C7C:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(r3))) {
        goto loc_80845C90;
    }
}

loc_80845C80:
{
    r0 = (r5 * 24);
    r3 = (r24 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    goto loc_80845D28;
}

loc_80845C90:
{
}

loc_80845C94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80845C9C;
    }
}

loc_80845C98:
{
    r3 = (r3 + 1);
}

loc_80845C9C:
{
    r0 = MemoryInline::FlatRead8((r4 + 1739));
}

loc_80845CA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80845CC0;
    }
}

loc_80845CA8:
{
}

loc_80845CAC:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(r3))) {
        goto loc_80845CC0;
    }
}

loc_80845CB0:
{
    r0 = (r5 * 24);
    r3 = (r24 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_80845D28;
}

loc_80845CC0:
{
}

loc_80845CC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80845CCC;
    }
}

loc_80845CC8:
{
    r3 = (r3 + 1);
}

loc_80845CCC:
{
    r0 = MemoryInline::FlatRead8((r4 + 1740));
}

loc_80845CD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80845CF0;
    }
}

loc_80845CD8:
{
}

loc_80845CDC:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(r3))) {
        goto loc_80845CF0;
    }
}

loc_80845CE0:
{
    r0 = (r5 * 24);
    r3 = (r24 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 16));
    goto loc_80845D28;
}

loc_80845CF0:
{
}

loc_80845CF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80845CFC;
    }
}

loc_80845CF8:
{
    r3 = (r3 + 1);
}

loc_80845CFC:
{
    r0 = MemoryInline::FlatRead8((r4 + 1741));
}

loc_80845D04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80845D20;
    }
}

loc_80845D08:
{
}

loc_80845D0C:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(r3))) {
        goto loc_80845D20;
    }
}

loc_80845D10:
{
    r0 = (r5 * 24);
    r3 = (r24 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 20));
    goto loc_80845D28;
}

loc_80845D20:
{
}

loc_80845D24:
{
    r0 = -1;
}

loc_80845D28:
{
}

loc_80845D2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80845E24;
    }
}

loc_80845D30:
{
    r0 = (r5 + -2);
    r3 = (r31 + 36);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r4 = (r4_rot_2 & 134217727);
    r4 = (r4 + 1);
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_38 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_38 & -4);
    r3_addr_38 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_38);
    // end of inlined leaf 0x805C2AC0
    r4 = r21;
    r3 = (r3 + 104);
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_39 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_39 & -4);
    r3_addr_39 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_39);
    // end of inlined leaf 0x805C2AC0
    r4 = 0;
    r3 = (r3 + 104);
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_40 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_40 & -4);
    r3_addr_40 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_40);
    // end of inlined leaf 0x805C2AC0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80845D64:
{
    r19 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80845D74;
    }
}

loc_80845D6C:
{
    r19 = 0;
    goto loc_80845DBC;
}

loc_80845D74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80845DB8;
    }
}

loc_80845D78:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x80845D88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80845DA0;
}

loc_80845D8C:
{
}

loc_80845D90:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_80845D9C;
    }
}

loc_80845D94:
{
    r0 = 1;
    goto loc_80845DAC;
}

loc_80845D9C:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80845DA0:
{
}

loc_80845DA4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80845D8C;
    }
}

loc_80845DA8:
{
    r0 = 0;
}

loc_80845DAC:
{
}

loc_80845DB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80845DB8;
    }
}

loc_80845DB4:
{
    goto loc_80845DBC;
}

loc_80845DB8:
{
    r19 = 0;
}

loc_80845DBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r19), static_cast<int32_t>(0));
}

loc_80845DC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80845DCC;
    }
}

loc_80845DC4:
{
    r19 = 0;
    goto loc_80845E18;
}

loc_80845DCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80845E14;
    }
}

loc_80845DD0:
{
    r12 = MemoryInline::FlatRead32(r19);
    r3 = r19;
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x80845DE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80845DFC;
}

loc_80845DE8:
{
}

loc_80845DEC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r20))) {
        goto loc_80845DF8;
    }
}

loc_80845DF0:
{
    r0 = 1;
    goto loc_80845E08;
}

loc_80845DF8:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80845DFC:
{
}

loc_80845E00:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80845DE8;
    }
}

loc_80845E04:
{
    r0 = 0;
}

loc_80845E08:
{
}

loc_80845E0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80845E14;
    }
}

loc_80845E10:
{
    goto loc_80845E18;
}

loc_80845E14:
{
    r19 = 0;
}

loc_80845E18:
{
    r3 = r19;
    r4 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805BDBD4u) && KnownTranslatedCpuCall<0x805BDBD4u>::kAvailable && !KnownTranslatedCpuCall<0x805BDBD4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805BDBD4u>()) {
        const auto state_free_result_805BDBD4_105E6 = func_805BDBD4_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_805BDBD4_105E6);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
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
        InvokeDirectCpu<0x805BDBD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
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
}

loc_80845E24:
{
    r21 = (r21 + 1);
}

loc_80845E28:
{
    r0 = MemoryInline::FlatRead32((r31 + 2568));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(r0));
}

loc_80845E30:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80845A30;
    }
}

loc_80845E34:
{
    goto loc_80846A08;
}

loc_80845E38:
{
    r3 = (r31 + 36);
    r4 = 1;
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x805C2AC0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80845E48:
{
    r19 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80845E58;
    }
}

loc_80845E50:
{
    r19 = 0;
    goto loc_80845EA8;
}

loc_80845E58:
{
    r21 = 0x809C0000u;
    r21 = (r21 + 7812);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80845EA4;
    }
}

loc_80845E64:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x80845E74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80845E8C;
}

loc_80845E78:
{
}

loc_80845E7C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r21))) {
        goto loc_80845E88;
    }
}

loc_80845E80:
{
    r0 = 1;
    goto loc_80845E98;
}

loc_80845E88:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80845E8C:
{
}

loc_80845E90:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80845E78;
    }
}

loc_80845E94:
{
    r0 = 0;
}

loc_80845E98:
{
}

loc_80845E9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80845EA4;
    }
}

loc_80845EA0:
{
    goto loc_80845EA8;
}

loc_80845EA4:
{
    r19 = 0;
}

loc_80845EA8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r19 + 128), static_cast<uint8_t>(r0));
    r3 = (r31 + 36);
    r4 = 2;
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x805C2AC0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80845EC0:
{
    r19 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80845ED0;
    }
}

loc_80845EC8:
{
    r19 = 0;
    goto loc_80845F20;
}

loc_80845ED0:
{
    r21 = 0x809C0000u;
    r21 = (r21 + 7812);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80845F1C;
    }
}

loc_80845EDC:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x80845EECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80845F04;
}

loc_80845EF0:
{
}

loc_80845EF4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r21))) {
        goto loc_80845F00;
    }
}

loc_80845EF8:
{
    r0 = 1;
    goto loc_80845F10;
}

loc_80845F00:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80845F04:
{
}

loc_80845F08:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80845EF0;
    }
}

loc_80845F0C:
{
    r0 = 0;
}

loc_80845F10:
{
}

loc_80845F14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80845F1C;
    }
}

loc_80845F18:
{
    goto loc_80845F20;
}

loc_80845F1C:
{
    r19 = 0;
}

loc_80845F20:
{
    r22 = (r20 * 12);
    r3 = 0x808B0000u;
    r28 = 0x809C0000u;
    r29 = 0x809C0000u;
    r21 = (r20 * 48);
    r0 = 0;
    r3 = (r3 + -10632);
    MemoryInline::FlatWrite8((r19 + 128), static_cast<uint8_t>(r0));
    r24 = (r31 + r22);
    r28 = (r28 + 7812);
    r23 = (r3 + r21);
    r29 = (r29 + 7016);
    r20 = 0;
    r30 = 0x809C0000u;
    goto loc_80846434;
}

loc_80845F5C:
{
    r3 = (r31 + 36);
    r4 = 2;
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    // end of inlined leaf 0x805C2AC0
    r4 = r20;
    r3 = (r3 + 104);
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    // end of inlined leaf 0x805C2AC0
    r4 = 0;
    r3 = (r3 + 104);
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3_addr_6 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_6);
    // end of inlined leaf 0x805C2AC0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80845F84:
{
    r26 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80845F94;
    }
}

loc_80845F8C:
{
    r26 = 0;
    goto loc_80845FDC;
}

loc_80845F94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80845FD8;
    }
}

loc_80845F98:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x80845FA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80845FC0;
}

loc_80845FAC:
{
}

loc_80845FB0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r28))) {
        goto loc_80845FBC;
    }
}

loc_80845FB4:
{
    r0 = 1;
    goto loc_80845FCC;
}

loc_80845FBC:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80845FC0:
{
}

loc_80845FC4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80845FAC;
    }
}

loc_80845FC8:
{
    r0 = 0;
}

loc_80845FCC:
{
}

loc_80845FD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80845FD8;
    }
}

loc_80845FD4:
{
    goto loc_80845FDC;
}

loc_80845FD8:
{
    r26 = 0;
}

loc_80845FDC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_80845FE0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80845FEC;
    }
}

loc_80845FE4:
{
    r26 = 0;
    goto loc_80846038;
}

loc_80845FEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80846034;
    }
}

loc_80845FF0:
{
    r12 = MemoryInline::FlatRead32(r26);
    r3 = r26;
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x80846004u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8084601C;
}

loc_80846008:
{
}

loc_8084600C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_80846018;
    }
}

loc_80846010:
{
    r0 = 1;
    goto loc_80846028;
}

loc_80846018:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8084601C:
{
}

loc_80846020:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80846008;
    }
}

loc_80846024:
{
    r0 = 0;
}

loc_80846028:
{
}

loc_8084602C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80846034;
    }
}

loc_80846030:
{
    goto loc_80846038;
}

loc_80846034:
{
    r26 = 0;
}

loc_80846038:
{
    r3 = (r31 + 36);
    r4 = 2;
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3_addr_7 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_7);
    // end of inlined leaf 0x805C2AC0
    r4 = r20;
    r3 = (r3 + 104);
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3_addr_8 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_8);
    // end of inlined leaf 0x805C2AC0
    r4 = 1;
    r3 = (r3 + 104);
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3_addr_9 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_9);
    // end of inlined leaf 0x805C2AC0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80846060:
{
    r25 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80846070;
    }
}

loc_80846068:
{
    r25 = 0;
    goto loc_808460B8;
}

loc_80846070:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808460B4;
    }
}

loc_80846074:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x80846084u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8084609C;
}

loc_80846088:
{
}

loc_8084608C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r28))) {
        goto loc_80846098;
    }
}

loc_80846090:
{
    r0 = 1;
    goto loc_808460A8;
}

loc_80846098:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8084609C:
{
}

loc_808460A0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80846088;
    }
}

loc_808460A4:
{
    r0 = 0;
}

loc_808460A8:
{
}

loc_808460AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808460B4;
    }
}

loc_808460B0:
{
    goto loc_808460B8;
}

loc_808460B4:
{
    r25 = 0;
}

loc_808460B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_808460BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808460C8;
    }
}

loc_808460C0:
{
    r25 = 0;
    goto loc_80846114;
}

loc_808460C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80846110;
    }
}

loc_808460CC:
{
    r12 = MemoryInline::FlatRead32(r25);
    r3 = r25;
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x808460E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_808460F8;
}

loc_808460E4:
{
}

loc_808460E8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_808460F4;
    }
}

loc_808460EC:
{
    r0 = 1;
    goto loc_80846104;
}

loc_808460F4:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_808460F8:
{
}

loc_808460FC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808460E4;
    }
}

loc_80846100:
{
    r0 = 0;
}

loc_80846104:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80846108:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80846110;
    }
}

loc_8084610C:
{
    goto loc_80846114;
}

loc_80846110:
{
    r25 = 0;
}

loc_80846114:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x80846128u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    r3 = r26;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805BDBD4u) && KnownTranslatedCpuCall<0x805BDBD4u>::kAvailable && !KnownTranslatedCpuCall<0x805BDBD4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805BDBD4u>()) {
        func_805BDBD4_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
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
        InvokeDirectCpu<0x805BDBD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
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
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x80846148u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    r3 = r25;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805BDBD4u) && KnownTranslatedCpuCall<0x805BDBD4u>::kAvailable && !KnownTranslatedCpuCall<0x805BDBD4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805BDBD4u>()) {
        func_805BDBD4_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
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
        InvokeDirectCpu<0x805BDBD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
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
    r0 = MemoryInline::FlatRead8((r24 + 1736));
    r3 = 0;
}

loc_80846160:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80846174;
    }
}

loc_80846164:
{
}

loc_80846168:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(r3))) {
        goto loc_80846174;
    }
}

loc_8084616C:
{
    r19 = MemoryInline::FlatRead32(r23);
    goto loc_80846244;
}

loc_80846174:
{
}

loc_80846178:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80846180;
    }
}

loc_8084617C:
{
    r3 = 1;
}

loc_80846180:
{
    r0 = MemoryInline::FlatRead8((r24 + 1737));
}

loc_80846188:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8084619C;
    }
}

loc_8084618C:
{
}

loc_80846190:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(r3))) {
        goto loc_8084619C;
    }
}

loc_80846194:
{
    r19 = MemoryInline::FlatRead32((r23 + 4));
    goto loc_80846244;
}

loc_8084619C:
{
}

loc_808461A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808461A8;
    }
}

loc_808461A4:
{
    r3 = (r3 + 1);
}

loc_808461A8:
{
    r0 = MemoryInline::FlatRead8((r24 + 1738));
}

loc_808461B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808461C4;
    }
}

loc_808461B4:
{
}

loc_808461B8:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(r3))) {
        goto loc_808461C4;
    }
}

loc_808461BC:
{
    r19 = MemoryInline::FlatRead32((r23 + 8));
    goto loc_80846244;
}

loc_808461C4:
{
}

loc_808461C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808461D0;
    }
}

loc_808461CC:
{
    r3 = (r3 + 1);
}

loc_808461D0:
{
    r0 = MemoryInline::FlatRead8((r24 + 1739));
}

loc_808461D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808461EC;
    }
}

loc_808461DC:
{
}

loc_808461E0:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(r3))) {
        goto loc_808461EC;
    }
}

loc_808461E4:
{
    r19 = MemoryInline::FlatRead32((r23 + 12));
    goto loc_80846244;
}

loc_808461EC:
{
}

loc_808461F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808461F8;
    }
}

loc_808461F4:
{
    r3 = (r3 + 1);
}

loc_808461F8:
{
    r0 = MemoryInline::FlatRead8((r24 + 1740));
}

loc_80846200:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80846214;
    }
}

loc_80846204:
{
}

loc_80846208:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(r3))) {
        goto loc_80846214;
    }
}

loc_8084620C:
{
    r19 = MemoryInline::FlatRead32((r23 + 16));
    goto loc_80846244;
}

loc_80846214:
{
}

loc_80846218:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80846220;
    }
}

loc_8084621C:
{
    r3 = (r3 + 1);
}

loc_80846220:
{
    r0 = MemoryInline::FlatRead8((r24 + 1741));
}

loc_80846228:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8084623C;
    }
}

loc_8084622C:
{
}

loc_80846230:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(r3))) {
        goto loc_8084623C;
    }
}

loc_80846234:
{
    r19 = MemoryInline::FlatRead32((r23 + 20));
    goto loc_80846244;
}

loc_8084623C:
{
}

loc_80846240:
{
    r19 = -1;
}

loc_80846244:
{
    r0 = MemoryInline::FlatRead8((r24 + 1742));
    r3 = 0;
}

loc_80846250:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80846264;
    }
}

loc_80846254:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(r3));
}

loc_80846258:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80846264;
    }
}

loc_8084625C:
{
    r27 = MemoryInline::FlatRead32((r23 + 24));
    goto loc_80846334;
}

loc_80846264:
{
}

loc_80846268:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80846270;
    }
}

loc_8084626C:
{
    r3 = 1;
}

loc_80846270:
{
    r0 = MemoryInline::FlatRead8((r24 + 1743));
}

loc_80846278:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8084628C;
    }
}

loc_8084627C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(r3));
}

loc_80846280:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8084628C;
    }
}

loc_80846284:
{
    r27 = MemoryInline::FlatRead32((r23 + 28));
    goto loc_80846334;
}

loc_8084628C:
{
}

loc_80846290:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80846298;
    }
}

loc_80846294:
{
    r3 = (r3 + 1);
}

loc_80846298:
{
    r0 = MemoryInline::FlatRead8((r24 + 1744));
}

loc_808462A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808462B4;
    }
}

loc_808462A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(r3));
}

loc_808462A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808462B4;
    }
}

loc_808462AC:
{
    r27 = MemoryInline::FlatRead32((r23 + 32));
    goto loc_80846334;
}

loc_808462B4:
{
}

loc_808462B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808462C0;
    }
}

loc_808462BC:
{
    r3 = (r3 + 1);
}

loc_808462C0:
{
    r0 = MemoryInline::FlatRead8((r24 + 1745));
}

loc_808462C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808462DC;
    }
}

loc_808462CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(r3));
}

loc_808462D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808462DC;
    }
}

loc_808462D4:
{
    r27 = MemoryInline::FlatRead32((r23 + 36));
    goto loc_80846334;
}

loc_808462DC:
{
}

loc_808462E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808462E8;
    }
}

loc_808462E4:
{
    r3 = (r3 + 1);
}

loc_808462E8:
{
    r0 = MemoryInline::FlatRead8((r24 + 1746));
}

loc_808462F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80846304;
    }
}

loc_808462F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(r3));
}

loc_808462F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80846304;
    }
}

loc_808462FC:
{
    r27 = MemoryInline::FlatRead32((r23 + 40));
    goto loc_80846334;
}

loc_80846304:
{
}

loc_80846308:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80846310;
    }
}

loc_8084630C:
{
    r3 = (r3 + 1);
}

loc_80846310:
{
    r0 = MemoryInline::FlatRead8((r24 + 1747));
}

loc_80846318:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8084632C;
    }
}

loc_8084631C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(r3));
}

loc_80846320:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8084632C;
    }
}

loc_80846324:
{
    r27 = MemoryInline::FlatRead32((r23 + 44));
    goto loc_80846334;
}

loc_8084632C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80846330:
{
    r27 = -1;
}

loc_80846334:
{
    r3 = r31;
    r4 = r26;
    r5 = r19;
    ctx->lr = 0x80846344u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x80847344u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r31;
    r4 = r25;
    r5 = r27;
    ctx->lr = 0x80846354u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x80847344u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(0));
}

loc_80846358:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80846390;
    }
}

loc_8084635C:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = r26;
    r12 = MemoryInline::FlatRead32((r12 + 120));
    ctr = r12;
    ctx->lr = 0x80846374u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = r26;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 100));
    ctr = r12;
    ctx->lr = 0x80846390u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
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

loc_80846390:
{
    r3 = MemoryInline::FlatRead32((r30 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 316));
}

loc_808463A0:
{
    if ((static_cast<int32_t>(r19) != static_cast<int32_t>(r0))) {
        goto loc_808463E0;
    }
}

loc_808463A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r19), static_cast<int32_t>(-1));
}

loc_808463A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808463E0;
    }
}

loc_808463AC:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = r26;
    r12 = MemoryInline::FlatRead32((r12 + 120));
    ctr = r12;
    ctx->lr = 0x808463C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = r26;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 100));
    ctr = r12;
    ctx->lr = 0x808463E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
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

loc_808463E0:
{
    r3 = MemoryInline::FlatRead32((r30 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 316));
}

loc_808463F0:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(r0))) {
        goto loc_80846430;
    }
}

loc_808463F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(-1));
}

loc_808463F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80846430;
    }
}

loc_808463FC:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = r25;
    r12 = MemoryInline::FlatRead32((r12 + 120));
    ctr = r12;
    ctx->lr = 0x80846414u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = r25;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 100));
    ctr = r12;
    ctx->lr = 0x80846430u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
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

loc_80846430:
{
    r20 = (r20 + 1);
}

loc_80846434:
{
    r0 = MemoryInline::FlatRead32((r31 + 2568));
}

loc_8084643C:
{
    if ((static_cast<int32_t>(r20) < static_cast<int32_t>(r0))) {
        goto loc_80845F5C;
    }
}

loc_80846440:
{
    r3 = 0x808B0000u;
    r23 = 0x809C0000u;
    r19 = 0x809C0000u;
    r25 = (r31 + r22);
    r3 = (r3 + -10632);
    r23 = (r23 + 7812);
    r26 = (r3 + r21);
    r19 = (r19 + 7016);
    r20 = 0;
    goto loc_808469FC;
}

loc_80846468:
{
    r3 = (r31 + 36);
    r4 = 1;
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3_addr_11 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_11);
    // end of inlined leaf 0x805C2AC0
    r4 = r20;
    r3 = (r3 + 104);
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r3_addr_12 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_12);
    // end of inlined leaf 0x805C2AC0
    r4 = 0;
    r3 = (r3 + 104);
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r3_addr_13 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_13);
    // end of inlined leaf 0x805C2AC0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80846490:
{
    r21 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808464A0;
    }
}

loc_80846498:
{
    r21 = 0;
    goto loc_808464E8;
}

loc_808464A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808464E4;
    }
}

loc_808464A4:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x808464B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_808464CC;
}

loc_808464B8:
{
}

loc_808464BC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r23))) {
        goto loc_808464C8;
    }
}

loc_808464C0:
{
    r0 = 1;
    goto loc_808464D8;
}

loc_808464C8:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_808464CC:
{
}

loc_808464D0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808464B8;
    }
}

loc_808464D4:
{
    r0 = 0;
}

loc_808464D8:
{
}

loc_808464DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808464E4;
    }
}

loc_808464E0:
{
    goto loc_808464E8;
}

loc_808464E4:
{
    r21 = 0;
}

loc_808464E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(0));
}

loc_808464EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808464F8;
    }
}

loc_808464F0:
{
    r21 = 0;
    goto loc_80846544;
}

loc_808464F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80846540;
    }
}

loc_808464FC:
{
    r12 = MemoryInline::FlatRead32(r21);
    r3 = r21;
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x80846510u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80846528;
}

loc_80846514:
{
}

loc_80846518:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r19))) {
        goto loc_80846524;
    }
}

loc_8084651C:
{
    r0 = 1;
    goto loc_80846534;
}

loc_80846524:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80846528:
{
}

loc_8084652C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80846514;
    }
}

loc_80846530:
{
    r0 = 0;
}

loc_80846534:
{
}

loc_80846538:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80846540;
    }
}

loc_8084653C:
{
    goto loc_80846544;
}

loc_80846540:
{
    r21 = 0;
}

loc_80846544:
{
    r3 = r21;
    r4 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805BDBD4u) && KnownTranslatedCpuCall<0x805BDBD4u>::kAvailable && !KnownTranslatedCpuCall<0x805BDBD4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805BDBD4u>()) {
        func_805BDBD4_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
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
        InvokeDirectCpu<0x805BDBD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
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
    r3 = (r31 + 36);
    r4 = 1;
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & -4);
    r3_addr_14 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_14);
    // end of inlined leaf 0x805C2AC0
    r4 = r20;
    r3 = (r3 + 104);
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r3_addr_15 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_15);
    // end of inlined leaf 0x805C2AC0
    r4 = 0;
    r3 = (r3 + 104);
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & -4);
    r3_addr_16 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_16);
    // end of inlined leaf 0x805C2AC0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80846578:
{
    r21 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80846588;
    }
}

loc_80846580:
{
    r21 = 0;
    goto loc_808465D0;
}

loc_80846588:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808465CC;
    }
}

loc_8084658C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x8084659Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_808465B4;
}

loc_808465A0:
{
}

loc_808465A4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r23))) {
        goto loc_808465B0;
    }
}

loc_808465A8:
{
    r0 = 1;
    goto loc_808465C0;
}

loc_808465B0:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_808465B4:
{
}

loc_808465B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808465A0;
    }
}

loc_808465BC:
{
    r0 = 0;
}

loc_808465C0:
{
}

loc_808465C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808465CC;
    }
}

loc_808465C8:
{
    goto loc_808465D0;
}

loc_808465CC:
{
    r21 = 0;
}

loc_808465D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(0));
}

loc_808465D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808465E0;
    }
}

loc_808465D8:
{
    r21 = 0;
    goto loc_8084662C;
}

loc_808465E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80846628;
    }
}

loc_808465E4:
{
    r12 = MemoryInline::FlatRead32(r21);
    r3 = r21;
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x808465F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80846610;
}

loc_808465FC:
{
}

loc_80846600:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r19))) {
        goto loc_8084660C;
    }
}

loc_80846604:
{
    r0 = 1;
    goto loc_8084661C;
}

loc_8084660C:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80846610:
{
}

loc_80846614:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808465FC;
    }
}

loc_80846618:
{
    r0 = 0;
}

loc_8084661C:
{
}

loc_80846620:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80846628;
    }
}

loc_80846624:
{
    goto loc_8084662C;
}

loc_80846628:
{
    r21 = 0;
}

loc_8084662C:
{
    r3 = r21;
    r4 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805BDBD4u) && KnownTranslatedCpuCall<0x805BDBD4u>::kAvailable && !KnownTranslatedCpuCall<0x805BDBD4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805BDBD4u>()) {
        func_805BDBD4_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
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
        InvokeDirectCpu<0x805BDBD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
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
    r0 = MemoryInline::FlatRead8((r25 + 1736));
    r3 = 0;
}

loc_80846644:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80846658;
    }
}

loc_80846648:
{
}

loc_8084664C:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(r3))) {
        goto loc_80846658;
    }
}

loc_80846650:
{
    r0 = MemoryInline::FlatRead32(r26);
    goto loc_80846728;
}

loc_80846658:
{
}

loc_8084665C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80846664;
    }
}

loc_80846660:
{
    r3 = 1;
}

loc_80846664:
{
    r0 = MemoryInline::FlatRead8((r25 + 1737));
}

loc_8084666C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80846680;
    }
}

loc_80846670:
{
}

loc_80846674:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(r3))) {
        goto loc_80846680;
    }
}

loc_80846678:
{
    r0 = MemoryInline::FlatRead32((r26 + 4));
    goto loc_80846728;
}

loc_80846680:
{
}

loc_80846684:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8084668C;
    }
}

loc_80846688:
{
    r3 = (r3 + 1);
}

loc_8084668C:
{
    r0 = MemoryInline::FlatRead8((r25 + 1738));
}

loc_80846694:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808466A8;
    }
}

loc_80846698:
{
}

loc_8084669C:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(r3))) {
        goto loc_808466A8;
    }
}

loc_808466A0:
{
    r0 = MemoryInline::FlatRead32((r26 + 8));
    goto loc_80846728;
}

loc_808466A8:
{
}

loc_808466AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808466B4;
    }
}

loc_808466B0:
{
    r3 = (r3 + 1);
}

loc_808466B4:
{
    r0 = MemoryInline::FlatRead8((r25 + 1739));
}

loc_808466BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808466D0;
    }
}

loc_808466C0:
{
}

loc_808466C4:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(r3))) {
        goto loc_808466D0;
    }
}

loc_808466C8:
{
    r0 = MemoryInline::FlatRead32((r26 + 12));
    goto loc_80846728;
}

loc_808466D0:
{
}

loc_808466D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808466DC;
    }
}

loc_808466D8:
{
    r3 = (r3 + 1);
}

loc_808466DC:
{
    r0 = MemoryInline::FlatRead8((r25 + 1740));
}

loc_808466E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808466F8;
    }
}

loc_808466E8:
{
}

loc_808466EC:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(r3))) {
        goto loc_808466F8;
    }
}

loc_808466F0:
{
    r0 = MemoryInline::FlatRead32((r26 + 16));
    goto loc_80846728;
}

loc_808466F8:
{
}

loc_808466FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80846704;
    }
}

loc_80846700:
{
    r3 = (r3 + 1);
}

loc_80846704:
{
    r0 = MemoryInline::FlatRead8((r25 + 1741));
}

loc_8084670C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80846720;
    }
}

loc_80846710:
{
}

loc_80846714:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(r3))) {
        goto loc_80846720;
    }
}

loc_80846718:
{
    r0 = MemoryInline::FlatRead32((r26 + 20));
    goto loc_80846728;
}

loc_80846720:
{
}

loc_80846724:
{
    r0 = -1;
}

loc_80846728:
{
}

loc_8084672C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80846818;
    }
}

loc_80846730:
{
    r3 = (r31 + 36);
    r4 = 2;
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_17 & -4);
    r3_addr_17 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_17);
    // end of inlined leaf 0x805C2AC0
    r4 = r20;
    r3 = (r3 + 104);
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_18 & -4);
    r3_addr_18 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_18);
    // end of inlined leaf 0x805C2AC0
    r4 = 0;
    r3 = (r3 + 104);
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & -4);
    r3_addr_19 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_19);
    // end of inlined leaf 0x805C2AC0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80846758:
{
    r21 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80846768;
    }
}

loc_80846760:
{
    r21 = 0;
    goto loc_808467B0;
}

loc_80846768:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808467AC;
    }
}

loc_8084676C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x8084677Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80846794;
}

loc_80846780:
{
}

loc_80846784:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r23))) {
        goto loc_80846790;
    }
}

loc_80846788:
{
    r0 = 1;
    goto loc_808467A0;
}

loc_80846790:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80846794:
{
}

loc_80846798:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80846780;
    }
}

loc_8084679C:
{
    r0 = 0;
}

loc_808467A0:
{
}

loc_808467A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808467AC;
    }
}

loc_808467A8:
{
    goto loc_808467B0;
}

loc_808467AC:
{
    r21 = 0;
}

loc_808467B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(0));
}

loc_808467B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808467C0;
    }
}

loc_808467B8:
{
    r21 = 0;
    goto loc_8084680C;
}

loc_808467C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80846808;
    }
}

loc_808467C4:
{
    r12 = MemoryInline::FlatRead32(r21);
    r3 = r21;
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x808467D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_808467F0;
}

loc_808467DC:
{
}

loc_808467E0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r19))) {
        goto loc_808467EC;
    }
}

loc_808467E4:
{
    r0 = 1;
    goto loc_808467FC;
}

loc_808467EC:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_808467F0:
{
}

loc_808467F4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808467DC;
    }
}

loc_808467F8:
{
    r0 = 0;
}

loc_808467FC:
{
}

loc_80846800:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80846808;
    }
}

loc_80846804:
{
    goto loc_8084680C;
}

loc_80846808:
{
    r21 = 0;
}

loc_8084680C:
{
    r3 = r21;
    r4 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805BDBD4u) && KnownTranslatedCpuCall<0x805BDBD4u>::kAvailable && !KnownTranslatedCpuCall<0x805BDBD4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805BDBD4u>()) {
        const auto state_free_result_805BDBD4_210E2 = func_805BDBD4_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_805BDBD4_210E2);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
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
        InvokeDirectCpu<0x805BDBD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
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
}

loc_80846818:
{
    r0 = MemoryInline::FlatRead8((r25 + 1742));
    r3 = 0;
}

loc_80846824:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80846838;
    }
}

loc_80846828:
{
}

loc_8084682C:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(r3))) {
        goto loc_80846838;
    }
}

loc_80846830:
{
    r0 = MemoryInline::FlatRead32((r26 + 24));
    goto loc_80846908;
}

loc_80846838:
{
}

loc_8084683C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80846844;
    }
}

loc_80846840:
{
    r3 = 1;
}

loc_80846844:
{
    r0 = MemoryInline::FlatRead8((r25 + 1743));
}

loc_8084684C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80846860;
    }
}

loc_80846850:
{
}

loc_80846854:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(r3))) {
        goto loc_80846860;
    }
}

loc_80846858:
{
    r0 = MemoryInline::FlatRead32((r26 + 28));
    goto loc_80846908;
}

loc_80846860:
{
}

loc_80846864:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8084686C;
    }
}

loc_80846868:
{
    r3 = (r3 + 1);
}

loc_8084686C:
{
    r0 = MemoryInline::FlatRead8((r25 + 1744));
}

loc_80846874:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80846888;
    }
}

loc_80846878:
{
}

loc_8084687C:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(r3))) {
        goto loc_80846888;
    }
}

loc_80846880:
{
    r0 = MemoryInline::FlatRead32((r26 + 32));
    goto loc_80846908;
}

loc_80846888:
{
}

loc_8084688C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80846894;
    }
}

loc_80846890:
{
    r3 = (r3 + 1);
}

loc_80846894:
{
    r0 = MemoryInline::FlatRead8((r25 + 1745));
}

loc_8084689C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808468B0;
    }
}

loc_808468A0:
{
}

loc_808468A4:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(r3))) {
        goto loc_808468B0;
    }
}

loc_808468A8:
{
    r0 = MemoryInline::FlatRead32((r26 + 36));
    goto loc_80846908;
}

loc_808468B0:
{
}

loc_808468B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808468BC;
    }
}

loc_808468B8:
{
    r3 = (r3 + 1);
}

loc_808468BC:
{
    r0 = MemoryInline::FlatRead8((r25 + 1746));
}

loc_808468C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808468D8;
    }
}

loc_808468C8:
{
}

loc_808468CC:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(r3))) {
        goto loc_808468D8;
    }
}

loc_808468D0:
{
    r0 = MemoryInline::FlatRead32((r26 + 40));
    goto loc_80846908;
}

loc_808468D8:
{
}

loc_808468DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808468E4;
    }
}

loc_808468E0:
{
    r3 = (r3 + 1);
}

loc_808468E4:
{
    r0 = MemoryInline::FlatRead8((r25 + 1747));
}

loc_808468EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80846900;
    }
}

loc_808468F0:
{
}

loc_808468F4:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(r3))) {
        goto loc_80846900;
    }
}

loc_808468F8:
{
    r0 = MemoryInline::FlatRead32((r26 + 44));
    goto loc_80846908;
}

loc_80846900:
{
}

loc_80846904:
{
    r0 = -1;
}

loc_80846908:
{
}

loc_8084690C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_808469F8;
    }
}

loc_80846910:
{
    r3 = (r31 + 36);
    r4 = 2;
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_21 & -4);
    r3_addr_21 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_21);
    // end of inlined leaf 0x805C2AC0
    r4 = r20;
    r3 = (r3 + 104);
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_22 & -4);
    r3_addr_22 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_22);
    // end of inlined leaf 0x805C2AC0
    r4 = 1;
    r3 = (r3 + 104);
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_23 & -4);
    r3_addr_23 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_23);
    // end of inlined leaf 0x805C2AC0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80846938:
{
    r21 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80846948;
    }
}

loc_80846940:
{
    r21 = 0;
    goto loc_80846990;
}

loc_80846948:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8084698C;
    }
}

loc_8084694C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x8084695Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80846974;
}

loc_80846960:
{
}

loc_80846964:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r23))) {
        goto loc_80846970;
    }
}

loc_80846968:
{
    r0 = 1;
    goto loc_80846980;
}

loc_80846970:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80846974:
{
}

loc_80846978:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80846960;
    }
}

loc_8084697C:
{
    r0 = 0;
}

loc_80846980:
{
}

loc_80846984:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8084698C;
    }
}

loc_80846988:
{
    goto loc_80846990;
}

loc_8084698C:
{
    r21 = 0;
}

loc_80846990:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(0));
}

loc_80846994:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808469A0;
    }
}

loc_80846998:
{
    r21 = 0;
    goto loc_808469EC;
}

loc_808469A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808469E8;
    }
}

loc_808469A4:
{
    r12 = MemoryInline::FlatRead32(r21);
    r3 = r21;
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x808469B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_808469D0;
}

loc_808469BC:
{
}

loc_808469C0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r19))) {
        goto loc_808469CC;
    }
}

loc_808469C4:
{
    r0 = 1;
    goto loc_808469DC;
}

loc_808469CC:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_808469D0:
{
}

loc_808469D4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808469BC;
    }
}

loc_808469D8:
{
    r0 = 0;
}

loc_808469DC:
{
}

loc_808469E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808469E8;
    }
}

loc_808469E4:
{
    goto loc_808469EC;
}

loc_808469E8:
{
    r21 = 0;
}

loc_808469EC:
{
    r3 = r21;
    r4 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805BDBD4u) && KnownTranslatedCpuCall<0x805BDBD4u>::kAvailable && !KnownTranslatedCpuCall<0x805BDBD4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805BDBD4u>()) {
        const auto state_free_result_805BDBD4_23CC6 = func_805BDBD4_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_805BDBD4_23CC6);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
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
        InvokeDirectCpu<0x805BDBD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
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
}

loc_808469F8:
{
    r20 = (r20 + 1);
}

loc_808469FC:
{
    r0 = MemoryInline::FlatRead32((r31 + 2568));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(r0));
}

loc_80846A04:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80846468;
    }
}

loc_80846A08:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 60u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 12));
            r20 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 20));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 28));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 36));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 44));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 52));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 56));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r1 + 60));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80845510 func_80845510 preserves=true fpr_mask=0x00000000
