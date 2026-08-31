#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805476C4_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_805476FC_statefree(uint32_t, uint32_t, PPC_FPR);
extern "C" uint64_t func_80547734_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8054774C_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_8054776C_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80547784_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_805477A4_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_805477BC_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_805477DC_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_805477F4_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80547814_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8054782C_statefree(uint32_t, uint32_t, uint32_t);
extern "C" void func_8054784C_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80547864_statefree(uint32_t, uint32_t, uint32_t);
extern "C" void func_80547884_statefree(uint32_t, uint32_t, PPC_FPR);
extern "C" uint64_t func_805478BC_statefree(uint32_t, uint32_t, PPC_FPR);
extern "C" uint64_t func_80547A64_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80547AA4_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80547AB8_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80547AD8_statefree(uint32_t);
extern "C" MkwStateFreeResult2 func_80547AE4_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80547B0C_statefree(uint32_t, uint32_t);
extern "C" void func_80547B20_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80547B48_statefree(uint32_t, uint32_t);
extern "C" void func_80547B5C_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80547B84_statefree(uint32_t, uint32_t);
extern "C" void func_80547B98_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80547BC0_statefree(uint32_t, uint32_t);
extern "C" void func_80547BD4_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80547BFC_statefree(uint32_t, uint32_t);
extern "C" uint64_t func_80547C38_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80547D1C_statefree(uint32_t, uint32_t);
extern "C" uint64_t func_80547E1C_statefree(uint32_t);
extern "C" uint64_t func_80547E84_statefree(uint32_t);
extern "C" uint64_t func_80547E8C_statefree(uint32_t);
extern "C" uint64_t func_80547E94_statefree(uint32_t);
extern "C" uint64_t func_80547E9C_statefree(uint32_t, uint32_t);
extern "C" uint64_t func_80547F08_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80547F40_statefree(uint32_t);
extern "C" void func_80547F4C_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80547F6C_statefree(uint32_t);
extern "C" void func_80547F98_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8054774C_statefree_v0(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80547784_statefree_v0(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_805477BC_statefree_v0(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_805477F4_statefree_v0(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8054782C_statefree_v0(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80547864_statefree_v0(uint32_t, uint32_t, uint32_t);

extern "C" void func_805467D0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_2 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805467D0;

loc_805467D0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r27);
    MemoryInline::FlatWriteRam32((r1 + 48), r28);
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = r5;
    r29 = r3;
    r30 = r4;
    r3 = r31;
    // inline leaf 0x80546FB4 (3 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead8((r3 + -27667));
    // end of inlined leaf 0x80546FB4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805467F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80546FA0;
    }
}

loc_805467FC:
{
    r3 = r31;
    // inline leaf 0x80546FDC (1 guest instruction(s))
    // end of inlined leaf 0x80546FDC
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80546FC0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    // inline leaf 0x80547034 (2 guest instruction(s))
    r3 = (r3 + 22);
    // end of inlined leaf 0x80547034
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    // inline leaf 0x80546FE0 (21 guest instruction(s))
    r6 = 65536;
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 8u, true, false);
    r11 = MemoryInline::ReadResolved8(guest_range_1, 0u, r4);
    r0 = (r6 + -29504);
    r10 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r4 + 1));
    r0 = (r5 * r0);
    r9 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r4 + 2));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r4 + 3));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r4 + 4));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r4 + 5));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r4 + 6));
    r3 = (r3 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r4 + 7));
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 48), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r3 + 48), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r3 + 49), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r3 + 50), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r3 + 51), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r3 + 52), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r3 + 53), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r3 + 54), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r3 + 55), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80546FE0
    r3 = r31;
    // inline leaf 0x805470D0 (3 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = (r3 + -28744);
    // end of inlined leaf 0x805470D0
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    // inline leaf 0x8054703C (37 guest instruction(s))
    r6 = 65536;
    guest_range_3 = MemoryInline::ResolveRangeHost(r4, 0, 64u, true, false);
    r10 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
    r0 = (r6 + -29504);
    r9 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
    r0 = (r5 * r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
            r7 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r4 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r4 + 16));
            r5 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r4 + 20));
        }
    }
    r11 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r4 + 24));
    r12 = (r3 + r0);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r4 + 28));
    guest_range_4 = MemoryInline::ResolveRangeHost((r12 + 72), 0, 64u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r12 + 72), r10);
    r10 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r4 + 32));
    MemoryInline::WriteResolved32(guest_range_4, 4u, (r12 + 76), r9);
    r9 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r4 + 36));
    MemoryInline::WriteResolved32(guest_range_4, 8u, (r12 + 80), r8);
    r8 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r4 + 40));
    MemoryInline::WriteResolved32(guest_range_4, 12u, (r12 + 84), r7);
    r7 = MemoryInline::ReadResolved32(guest_range_3, 44u, (r4 + 44));
    MemoryInline::WriteResolved32(guest_range_4, 16u, (r12 + 88), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_3, 48u, (r4 + 48));
    MemoryInline::WriteResolved32(guest_range_4, 20u, (r12 + 92), r5);
    r5 = MemoryInline::ReadResolved32(guest_range_3, 52u, (r4 + 52));
    MemoryInline::WriteResolved32(guest_range_4, 24u, (r12 + 96), r11);
    r3 = MemoryInline::ReadResolved32(guest_range_3, 56u, (r4 + 56));
    MemoryInline::WriteResolved32(guest_range_4, 28u, (r12 + 100), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 60u, (r4 + 60));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_4, 32u, (r12 + 104), r10);
        MemoryInline::WriteResolved32(guest_range_4, 36u, (r12 + 108), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_4, 40u, (r12 + 112), r8);
        MemoryInline::WriteResolved32(guest_range_4, 44u, (r12 + 116), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_4, 48u, (r12 + 120), r6);
        MemoryInline::WriteResolved32(guest_range_4, 52u, (r12 + 124), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_4, 56u, (r12 + 128), r3);
        MemoryInline::WriteResolved32(guest_range_4, 60u, (r12 + 132), r0);
    }
    // end of inlined leaf 0x8054703C
    r3 = r31;
    // inline leaf 0x805470FC (2 guest instruction(s))
    r3 = (r3 + 22984);
    // end of inlined leaf 0x805470FC
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x805470DCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = 0;
}

loc_80546860:
{
    r27 = 0;
}

loc_80546864:
{
    r3 = r31;
    r4 = r28;
    r5 = r27;
    // inline leaf 0x80547128 (6 guest instruction(s))
    r4 = (r4 * 896);
    r0 = (r5 * 112);
    r3 = (r3 + r4);
    r3 = (r3 + r0);
    r3 = (r3 + 32);
    // end of inlined leaf 0x80547128
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    r6 = r28;
    r7 = r27;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80547104u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(8));
}

loc_80546894:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80546864;
    }
}

loc_80546898:
{
    r28 = (r28 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(4));
}

loc_805468A0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80546860;
    }
}

loc_805468A4:
{
    r28 = 0;
}

loc_805468A8:
{
    r27 = 0;
}

loc_805468AC:
{
    r3 = r31;
    r4 = r28;
    r5 = (r27 & 255);
    // inline leaf 0x8054726C (6 guest instruction(s))
    r4 = (r4 * 3200);
    r0 = (r5 * 100);
    r3 = (r3 + r4);
    r3 = (r3 + r0);
    r3 = (r3 + 3616);
    // end of inlined leaf 0x8054726C
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    r6 = r28;
    r7 = (r27 & 255);
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80547140u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(32));
}

loc_805468DC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805468AC;
    }
}

loc_805468E0:
{
    r28 = (r28 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(6));
}

loc_805468E8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805468A8;
    }
}

loc_805468EC:
{
    r27 = 0;
}

loc_805468F0:
{
    r3 = r31;
    r4 = r27;
    // inline leaf 0x80547374 (4 guest instruction(s))
    r0 = (r4 * 28);
    r3 = (r3 + r0);
    r3 = (r3 + 22816);
    // end of inlined leaf 0x80547374
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    r6 = r27;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80547284u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(6));
}

loc_80546918:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805468F0;
    }
}

loc_8054691C:
{
    r3 = r31;
    // inline leaf 0x805473B8 (3 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = (r3 + -28680);
    // end of inlined leaf 0x805473B8
    r4 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 20), 0, 4u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 20));
    r5 = r30;
    // inline leaf 0x80547384 (13 guest instruction(s))
    r6 = 65536;
    guest_range_5 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 925u, true, false);
    r7 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r4 + 4));
    r0 = (r6 + -29504);
    r6 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r4 + 8));
    r8 = (r5 * r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 8u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r4 + 12));
            r0 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r4 + 16));
        }
    }
    r3 = (r3 + r8);
    MemoryInline::FlatWrite32((r3 + 56), r7);
    MemoryInline::FlatWrite32((r3 + 60), r6);
    MemoryInline::FlatWrite32((r3 + 64), r5);
    MemoryInline::FlatWrite32((r3 + 68), r0);
    // end of inlined leaf 0x80547384
    r3 = r31;
    // inline leaf 0x805473DC (3 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = MemoryInline::ReadResolved32(guest_range_5, 612u, (r3 + -28064));
    // end of inlined leaf 0x805473DC
    r4 = r3;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 20));
    r5 = r30;
    // inline leaf 0x805473C4 (6 guest instruction(s))
    r6 = 65536;
    r0 = (r6 + -29504);
    r0 = (r5 * r0);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 12), r4);
    // end of inlined leaf 0x805473C4
    r3 = r31;
    // inline leaf 0x80547400 (3 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = MemoryInline::ReadResolved32(guest_range_5, 616u, (r3 + -28060));
    // end of inlined leaf 0x80547400
    r4 = r3;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 20));
    r5 = r30;
    // inline leaf 0x805473E8 (6 guest instruction(s))
    r6 = 65536;
    r0 = (r6 + -29504);
    r0 = (r5 * r0);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 16), r4);
    // end of inlined leaf 0x805473E8
    r3 = r31;
    // inline leaf 0x8054742C (3 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = MemoryInline::ReadResolved8(guest_range_5, 620u, (r3 + -28056));
    // end of inlined leaf 0x8054742C
    r4 = r3;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 20));
    r5 = r30;
    // inline leaf 0x8054740C (8 guest instruction(s))
    r6 = 65536;
    r0 = (r6 + -29504);
    r0 = (r5 * r0);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 242));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(13));
    r0_mrot_1 = (r0_rot_1 & 8192);
    r0_mdest_1 = (r0 & -8193);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite16((r3 + 242), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8054740C
    r3 = r31;
    // inline leaf 0x80547458 (3 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = MemoryInline::ReadResolved8(guest_range_5, 924u, (r3 + -27752));
    // end of inlined leaf 0x80547458
    r4 = r3;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 20));
    r5 = r30;
    // inline leaf 0x80547438 (8 guest instruction(s))
    r6 = 65536;
    r0 = (r6 + -29504);
    r0 = (r5 * r0);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 452));
    r0_mrot_2 = (r4 & 1);
    r0_mdest_2 = (r0 & -2);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite32((r3 + 452), r0);
    // end of inlined leaf 0x80547438
    r3 = r31;
    // inline leaf 0x80547480 (3 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = (r3 + -28652);
    // end of inlined leaf 0x80547480
    r4 = r3;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 20));
    r5 = r30;
    // inline leaf 0x80547464 (7 guest instruction(s))
    r6 = 65536;
    r4 = MemoryInline::ReadResolved16(guest_range_5, 28u, (r4 + 4));
    r0 = (r6 + -29504);
    r0 = (r5 * r0);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite16((r3 + 184), static_cast<uint16_t>(r4));
    // end of inlined leaf 0x80547464
    r3 = r31;
    // inline leaf 0x805474A8 (3 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = (r3 + -28644);
    // end of inlined leaf 0x805474A8
    r4 = r3;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 20));
    r5 = r30;
    // inline leaf 0x8054748C (7 guest instruction(s))
    r6 = 65536;
    r4 = MemoryInline::ReadResolved16(guest_range_5, 36u, (r4 + 4));
    r0 = (r6 + -29504);
    r0 = (r5 * r0);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite16((r3 + 186), static_cast<uint16_t>(r4));
    // end of inlined leaf 0x8054748C
    r3 = r31;
    // inline leaf 0x805474CC (3 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = MemoryInline::ReadResolved32(guest_range_5, 624u, (r3 + -28052));
    // end of inlined leaf 0x805474CC
    r4 = r3;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 20));
    r5 = r30;
    // inline leaf 0x805474B4 (6 guest instruction(s))
    r6 = 65536;
    r0 = (r6 + -29504);
    r0 = (r5 * r0);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 144), r4);
    // end of inlined leaf 0x805474B4
    r3 = r31;
    // inline leaf 0x805474F0 (3 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = MemoryInline::ReadResolved32(guest_range_5, 628u, (r3 + -28048));
    // end of inlined leaf 0x805474F0
    r4 = r3;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 20));
    r5 = r30;
    // inline leaf 0x805474D8 (6 guest instruction(s))
    r6 = 65536;
    r0 = (r6 + -29504);
    r0 = (r5 * r0);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 148), r4);
    // end of inlined leaf 0x805474D8
    r3 = r31;
    // inline leaf 0x80547514 (3 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = MemoryInline::ReadResolved32(guest_range_5, 632u, (r3 + -28044));
    // end of inlined leaf 0x80547514
    r4 = r3;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 20));
    r5 = r30;
    // inline leaf 0x805474FC (6 guest instruction(s))
    r6 = 65536;
    r0 = (r6 + -29504);
    r0 = (r5 * r0);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 152), r4);
    // end of inlined leaf 0x805474FC
    r3 = r31;
    // inline leaf 0x80547538 (3 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = MemoryInline::ReadResolved32(guest_range_5, 636u, (r3 + -28040));
    // end of inlined leaf 0x80547538
    r4 = r3;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 20));
    r5 = r30;
    // inline leaf 0x80547520 (6 guest instruction(s))
    r6 = 65536;
    r0 = (r6 + -29504);
    r0 = (r5 * r0);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 156), r4);
    // end of inlined leaf 0x80547520
    r3 = r31;
    // inline leaf 0x8054755C (3 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = MemoryInline::ReadResolved32(guest_range_5, 640u, (r3 + -28036));
    // end of inlined leaf 0x8054755C
    r4 = r3;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 20));
    r5 = r30;
    // inline leaf 0x80547544 (6 guest instruction(s))
    r6 = 65536;
    r0 = (r6 + -29504);
    r0 = (r5 * r0);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 160), r4);
    // end of inlined leaf 0x80547544
    r3 = r31;
    // inline leaf 0x80547580 (3 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = MemoryInline::ReadResolved32(guest_range_5, 644u, (r3 + -28032));
    // end of inlined leaf 0x80547580
    r4 = r3;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 20));
    r5 = r30;
    // inline leaf 0x80547568 (6 guest instruction(s))
    r6 = 65536;
    r0 = (r6 + -29504);
    r0 = (r5 * r0);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 164), r4);
    // end of inlined leaf 0x80547568
    r3 = r31;
    // inline leaf 0x805475A4 (3 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = MemoryInline::ReadResolved32(guest_range_5, 648u, (r3 + -28028));
    // end of inlined leaf 0x805475A4
    r4 = r3;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 20));
    r5 = r30;
    // inline leaf 0x8054758C (6 guest instruction(s))
    r6 = 65536;
    r0 = (r6 + -29504);
    r0 = (r5 * r0);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 168), r4);
    // end of inlined leaf 0x8054758C
    r3 = r31;
    // inline leaf 0x805475C8 (3 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = MemoryInline::ReadResolved32(guest_range_5, 652u, (r3 + -28024));
    // end of inlined leaf 0x805475C8
    r4 = r3;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 20));
    r5 = r30;
    // inline leaf 0x805475B0 (6 guest instruction(s))
    r6 = 65536;
    r0 = (r6 + -29504);
    r0 = (r5 * r0);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 172), r4);
    // end of inlined leaf 0x805475B0
    r3 = r31;
    // inline leaf 0x805475EC (3 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = MemoryInline::ReadResolved32(guest_range_5, 656u, (r3 + -28020));
    // end of inlined leaf 0x805475EC
    r4 = r3;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 20));
    r5 = r30;
    // inline leaf 0x805475D4 (6 guest instruction(s))
    r6 = 65536;
    r0 = (r6 + -29504);
    r0 = (r5 * r0);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 176), r4);
    // end of inlined leaf 0x805475D4
    r3 = r31;
    // inline leaf 0x80547610 (3 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = MemoryInline::ReadResolved32(guest_range_5, 660u, (r3 + -28016));
    // end of inlined leaf 0x80547610
    r4 = r3;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 20));
    r5 = r30;
    // inline leaf 0x805475F8 (6 guest instruction(s))
    r6 = 65536;
    r0 = (r6 + -29504);
    r0 = (r5 * r0);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 180), r4);
    // end of inlined leaf 0x805475F8
    r3 = r31;
    // inline leaf 0x80547634 (8 guest instruction(s))
}

loc_inl44_0x80547634:
{
    r4 = (r3 + 65536);
    r3 = 131072;
    r0 = MemoryInline::FlatRead32((r4 + -28012));
    r3 = (r3 + -31073);
}

loc_inl44_0x80547648:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r3))) {
        goto loc_inl44_return;
    }
}

loc_inl44_0x8054764C:
{
    r3 = r0;
    goto loc_inl44_cont_80547634;
}

loc_inl44_return:
{
}

loc_inl44_cont_80547634:
{
    // end of inlined leaf 0x80547634
    r4 = r3;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 20));
    r5 = r30;
    // inline leaf 0x8054761C (6 guest instruction(s))
    r6 = 65536;
    r0 = (r6 + -29504);
    r0 = (r5 * r0);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 188), r4);
    // end of inlined leaf 0x8054761C
    r3 = r31;
    // inline leaf 0x8054766C (8 guest instruction(s))
}

loc_inl46_0x8054766C:
{
    r4 = (r3 + 65536);
    r3 = 131072;
    r0 = MemoryInline::FlatRead32((r4 + -28008));
    r3 = (r3 + -31073);
}

loc_inl46_0x80547680:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r3))) {
        goto loc_inl46_return;
    }
}

loc_inl46_0x80547684:
{
    r3 = r0;
    goto loc_inl46_cont_8054766C;
}

loc_inl46_return:
{
}

loc_inl46_cont_8054766C:
{
    // end of inlined leaf 0x8054766C
    r4 = r3;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 20));
    r5 = r30;
    // inline leaf 0x80547654 (6 guest instruction(s))
    r6 = 65536;
    r0 = (r6 + -29504);
    r0 = (r5 * r0);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 192), r4);
    // end of inlined leaf 0x80547654
    r3 = r31;
    // inline leaf 0x805476A4 (8 guest instruction(s))
}

loc_inl48_0x805476A4:
{
    r4 = (r3 + 65536);
    r3 = 131072;
    r0 = MemoryInline::FlatRead32((r4 + -28004));
    r3 = (r3 + -31073);
}

loc_inl48_0x805476B8:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r3))) {
        goto loc_inl48_return;
    }
}

loc_inl48_0x805476BC:
{
    r3 = r0;
    goto loc_inl48_cont_805476A4;
}

loc_inl48_return:
{
}

loc_inl48_cont_805476A4:
{
    // end of inlined leaf 0x805476A4
    r4 = r3;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 20));
    r5 = r30;
    // inline leaf 0x8054768C (6 guest instruction(s))
    r6 = 65536;
    r0 = (r6 + -29504);
    r0 = (r5 * r0);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 196), r4);
    // end of inlined leaf 0x8054768C
    r3 = r31;
    // inline leaf 0x805476DC (8 guest instruction(s))
}

loc_inl50_0x805476DC:
{
    r4 = (r3 + 65536);
    r3 = 131072;
    r0 = MemoryInline::FlatRead32((r4 + -28000));
    r3 = (r3 + -31073);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_inl50_0x805476F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl50_return;
    }
}

loc_inl50_0x805476F4:
{
    r3 = r0;
    goto loc_inl50_cont_805476DC;
}

loc_inl50_return:
{
}

loc_inl50_cont_805476DC:
{
    // end of inlined leaf 0x805476DC
    r4 = r3;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 20));
    r5 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805476C4u) && KnownTranslatedCpuCall<0x805476C4u>::kAvailable && !KnownTranslatedCpuCall<0x805476C4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805476C4u>()) {
        func_805476C4_statefree(r3, r4, r5);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805476C4u>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80547714u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805476FCu) && KnownTranslatedCpuCall<0x805476FCu>::kAvailable && !KnownTranslatedCpuCall<0x805476FCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805476FCu>()) {
        const auto state_free_result_805476FC_7ECE = func_805476FC_statefree(r3, r4, f1);
        r0 = static_cast<uint32_t>(state_free_result_805476FC_7ECE);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805476FCu>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8054774Cu) && KnownTranslatedCpuCall<0x8054774Cu>::kAvailable && !KnownTranslatedCpuCall<0x8054774Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8054774Cu>()) {
        const auto state_free_result_8054774C_8501 = func_8054774C_statefree_v0(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_8054774C_8501[0]);
        cr = static_cast<uint32_t>(state_free_result_8054774C_8501[1]);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8054774Cu>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547734u) && KnownTranslatedCpuCall<0x80547734u>::kAvailable && !KnownTranslatedCpuCall<0x80547734u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547734u>()) {
        const auto state_free_result_80547734_8BC2 = func_80547734_statefree(r3, r4, r5);
        r0 = static_cast<uint32_t>(state_free_result_80547734_8BC2);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547734u>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547784u) && KnownTranslatedCpuCall<0x80547784u>::kAvailable && !KnownTranslatedCpuCall<0x80547784u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547784u>()) {
        const auto state_free_result_80547784_91F5 = func_80547784_statefree_v0(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80547784_91F5[0]);
        cr = static_cast<uint32_t>(state_free_result_80547784_91F5[1]);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547784u>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8054776Cu) && KnownTranslatedCpuCall<0x8054776Cu>::kAvailable && !KnownTranslatedCpuCall<0x8054776Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8054776Cu>()) {
        const auto state_free_result_8054776C_98B6 = func_8054776C_statefree(r3, r4, r5);
        r0 = static_cast<uint32_t>(state_free_result_8054776C_98B6);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8054776Cu>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805477BCu) && KnownTranslatedCpuCall<0x805477BCu>::kAvailable && !KnownTranslatedCpuCall<0x805477BCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805477BCu>()) {
        const auto state_free_result_805477BC_9EE9 = func_805477BC_statefree_v0(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_805477BC_9EE9[0]);
        cr = static_cast<uint32_t>(state_free_result_805477BC_9EE9[1]);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805477BCu>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805477A4u) && KnownTranslatedCpuCall<0x805477A4u>::kAvailable && !KnownTranslatedCpuCall<0x805477A4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805477A4u>()) {
        const auto state_free_result_805477A4_A5AA = func_805477A4_statefree(r3, r4, r5);
        r0 = static_cast<uint32_t>(state_free_result_805477A4_A5AA);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805477A4u>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805477F4u) && KnownTranslatedCpuCall<0x805477F4u>::kAvailable && !KnownTranslatedCpuCall<0x805477F4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805477F4u>()) {
        const auto state_free_result_805477F4_ABDD = func_805477F4_statefree_v0(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_805477F4_ABDD[0]);
        cr = static_cast<uint32_t>(state_free_result_805477F4_ABDD[1]);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805477F4u>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805477DCu) && KnownTranslatedCpuCall<0x805477DCu>::kAvailable && !KnownTranslatedCpuCall<0x805477DCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805477DCu>()) {
        const auto state_free_result_805477DC_B29E = func_805477DC_statefree(r3, r4, r5);
        r0 = static_cast<uint32_t>(state_free_result_805477DC_B29E);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805477DCu>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8054782Cu) && KnownTranslatedCpuCall<0x8054782Cu>::kAvailable && !KnownTranslatedCpuCall<0x8054782Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8054782Cu>()) {
        const auto state_free_result_8054782C_B8D1 = func_8054782C_statefree_v0(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_8054782C_B8D1[0]);
        cr = static_cast<uint32_t>(state_free_result_8054782C_B8D1[1]);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8054782Cu>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547814u) && KnownTranslatedCpuCall<0x80547814u>::kAvailable && !KnownTranslatedCpuCall<0x80547814u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547814u>()) {
        const auto state_free_result_80547814_BF92 = func_80547814_statefree(r3, r4, r5);
        r0 = static_cast<uint32_t>(state_free_result_80547814_BF92);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547814u>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547864u) && KnownTranslatedCpuCall<0x80547864u>::kAvailable && !KnownTranslatedCpuCall<0x80547864u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547864u>()) {
        const auto state_free_result_80547864_C5C5 = func_80547864_statefree_v0(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80547864_C5C5[0]);
        cr = static_cast<uint32_t>(state_free_result_80547864_C5C5[1]);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547864u>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8054784Cu) && KnownTranslatedCpuCall<0x8054784Cu>::kAvailable && !KnownTranslatedCpuCall<0x8054784Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8054784Cu>()) {
        func_8054784C_statefree(r3, r4, r5);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8054784Cu>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8054789Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547884u) && KnownTranslatedCpuCall<0x80547884u>::kAvailable && !KnownTranslatedCpuCall<0x80547884u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547884u>()) {
        func_80547884_statefree(r3, r4, f1);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547884u>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x805478D4u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805478BCu) && KnownTranslatedCpuCall<0x805478BCu>::kAvailable && !KnownTranslatedCpuCall<0x805478BCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805478BCu>()) {
        const auto state_free_result_805478BC_DA34 = func_805478BC_statefree(r3, r4, f1);
        r0 = static_cast<uint32_t>(state_free_result_805478BC_DA34);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805478BCu>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8054790Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    r4 = (r0 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x805478F4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r27 = 0;
}

loc_80546C00:
{
    r3 = r31;
    r4 = (r27 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80547950u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r6 = r30;
    r4 = (r27 & 65535);
    r5 = (r0 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80547930u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r7 = ctx->gpr[7];
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(25));
}

loc_80546C2C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80546C00;
    }
}

loc_80546C30:
{
    r27 = 0;
}

loc_80546C34:
{
    r3 = r31;
    r4 = (r27 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8054799Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r6 = r30;
    r4 = (r27 & 65535);
    r5 = (r0 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x8054797Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r7 = ctx->gpr[7];
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(36));
}

loc_80546C60:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80546C34;
    }
}

loc_80546C64:
{
    r27 = 0;
}

loc_80546C68:
{
    r3 = r31;
    r4 = (r27 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x805479E8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r6 = r30;
    r4 = (r27 & 65535);
    r5 = (r0 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x805479C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r7 = ctx->gpr[7];
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(32));
}

loc_80546C94:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80546C68;
    }
}

loc_80546C98:
{
    r27 = 0;
}

loc_80546C9C:
{
    r4 = (r27 & 65535);
    r3 = r31;
    r4 = (r4 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x805479E8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r6 = r30;
    r4 = (r27 & 65535);
    r5 = (r0 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80547A14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r7 = ctx->gpr[7];
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(10));
}

loc_80546CCC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80546C9C;
    }
}

loc_80546CD0:
{
    r27 = 0;
}

loc_80546CD4:
{
    r28 = 0;
}

loc_80546CD8:
{
    r3 = r31;
    r4 = (r27 & 255);
    r5 = (r28 & 255);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547A64u) && KnownTranslatedCpuCall<0x80547A64u>::kAvailable && !KnownTranslatedCpuCall<0x80547A64u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547A64u>()) {
        const auto state_free_result_80547A64_F25A = func_80547A64_statefree(r3, r4, r5);
        r3 = static_cast<uint32_t>(state_free_result_80547A64_F25A);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547A64u>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r5 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    r6 = (r27 & 255);
    r7 = (r28 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x80547A34u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r8 = ctx->gpr[8];
    r28 = (r28 + 1);
}

loc_80546D08:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(8))) {
        goto loc_80546CD8;
    }
}

loc_80546D0C:
{
    r27 = (r27 + 1);
}

loc_80546D14:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(8))) {
        goto loc_80546CD4;
    }
}

loc_80546D18:
{
    r27 = 0;
}

loc_80546D1C:
{
    r3 = r31;
    r4 = r27;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547AA4u) && KnownTranslatedCpuCall<0x80547AA4u>::kAvailable && !KnownTranslatedCpuCall<0x80547AA4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547AA4u>()) {
        const auto state_free_result_80547AA4_FBE5 = func_80547AA4_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80547AA4_FBE5);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547AA4u>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    r6 = r27;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80547A80u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r27 = (r27 + 1);
}

loc_80546D44:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(2))) {
        goto loc_80546D1C;
    }
}

loc_80546D48:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547AD8u) && KnownTranslatedCpuCall<0x80547AD8u>::kAvailable && !KnownTranslatedCpuCall<0x80547AD8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547AD8u>()) {
        const auto state_free_result_80547AD8_10455 = func_80547AD8_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_80547AD8_10455);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547AD8u>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547AB8u) && KnownTranslatedCpuCall<0x80547AB8u>::kAvailable && !KnownTranslatedCpuCall<0x80547AB8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547AB8u>()) {
        const auto state_free_result_80547AB8_10AC0 = func_80547AB8_statefree(r3, r4, r5);
        r3 = static_cast<uint32_t>(state_free_result_80547AB8_10AC0[0]);
        r6 = static_cast<uint32_t>(state_free_result_80547AB8_10AC0[1]);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547AB8u>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r27 = 0;
}

loc_80546D64:
{
}

loc_80546D68:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80546D74;
    }
}

loc_80546D6C:
{
}

loc_80546D70:
{
    if ((static_cast<uint32_t>(r27) != static_cast<uint32_t>(2))) {
        goto loc_80546D94;
    }
}

loc_80546D74:
{
    r3 = r31;
    r4 = r27;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547B0Cu) && KnownTranslatedCpuCall<0x80547B0Cu>::kAvailable && !KnownTranslatedCpuCall<0x80547B0Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547B0Cu>()) {
        const auto state_free_result_80547B0C_112A0 = func_80547B0C_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80547B0C_112A0);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547B0Cu>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r5 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r27;
    r6 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547AE4u) && KnownTranslatedCpuCall<0x80547AE4u>::kAvailable && !KnownTranslatedCpuCall<0x80547AE4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547AE4u>()) {
        const auto state_free_result_80547AE4_1191E = func_80547AE4_statefree(r3, r4, r5, r6);
        r3 = static_cast<uint32_t>(state_free_result_80547AE4_1191E[0]);
        r4 = static_cast<uint32_t>(state_free_result_80547AE4_1191E[1]);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547AE4u>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_80546D94:
{
    r3 = r31;
    r4 = r27;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547B48u) && KnownTranslatedCpuCall<0x80547B48u>::kAvailable && !KnownTranslatedCpuCall<0x80547B48u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547B48u>()) {
        const auto state_free_result_80547B48_11FCA = func_80547B48_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80547B48_11FCA);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547B48u>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r5 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r27;
    r6 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547B20u) && KnownTranslatedCpuCall<0x80547B20u>::kAvailable && !KnownTranslatedCpuCall<0x80547B20u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547B20u>()) {
        func_80547B20_statefree(r3, r4, r5, r6);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547B20u>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r31;
    r4 = r27;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547B84u) && KnownTranslatedCpuCall<0x80547B84u>::kAvailable && !KnownTranslatedCpuCall<0x80547B84u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547B84u>()) {
        const auto state_free_result_80547B84_12C1B = func_80547B84_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80547B84_12C1B);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547B84u>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r5 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r27;
    r6 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547B5Cu) && KnownTranslatedCpuCall<0x80547B5Cu>::kAvailable && !KnownTranslatedCpuCall<0x80547B5Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547B5Cu>()) {
        func_80547B5C_statefree(r3, r4, r5, r6);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547B5Cu>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r31;
    r4 = r27;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547BC0u) && KnownTranslatedCpuCall<0x80547BC0u>::kAvailable && !KnownTranslatedCpuCall<0x80547BC0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547BC0u>()) {
        const auto state_free_result_80547BC0_1386C = func_80547BC0_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80547BC0_1386C);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547BC0u>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r5 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r27;
    r6 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547B98u) && KnownTranslatedCpuCall<0x80547B98u>::kAvailable && !KnownTranslatedCpuCall<0x80547B98u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547B98u>()) {
        func_80547B98_statefree(r3, r4, r5, r6);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547B98u>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r31;
    r4 = r27;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547BFCu) && KnownTranslatedCpuCall<0x80547BFCu>::kAvailable && !KnownTranslatedCpuCall<0x80547BFCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547BFCu>()) {
        const auto state_free_result_80547BFC_144BD = func_80547BFC_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80547BFC_144BD);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547BFCu>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r5 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r27;
    r6 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547BD4u) && KnownTranslatedCpuCall<0x80547BD4u>::kAvailable && !KnownTranslatedCpuCall<0x80547BD4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547BD4u>()) {
        func_80547BD4_statefree(r3, r4, r5, r6);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547BD4u>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r31;
    r4 = r27;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547C38u) && KnownTranslatedCpuCall<0x80547C38u>::kAvailable && !KnownTranslatedCpuCall<0x80547C38u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547C38u>()) {
        const auto state_free_result_80547C38_1510E = func_80547C38_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80547C38_1510E);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547C38u>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r5 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r27;
    r6 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80547C10u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r7 = ctx->gpr[7];
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(4));
}

loc_80546E3C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80546D64;
    }
}

loc_80546E40:
{
    r27 = 0;
}

loc_80546E44:
{
    r3 = r31;
    r4 = (r27 & 65535);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547D1Cu) && KnownTranslatedCpuCall<0x80547D1Cu>::kAvailable && !KnownTranslatedCpuCall<0x80547D1Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547D1Cu>()) {
        const auto state_free_result_80547D1C_159E1 = func_80547D1C_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_80547D1C_159E1[0]);
        r3 = static_cast<uint32_t>(state_free_result_80547D1C_159E1[1]);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547D1Cu>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r6 = r30;
    r5 = (r27 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80547C4Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(10));
}

loc_80546E6C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80546E44;
    }
}

loc_80546E70:
{
    r3 = (r1 + 16);
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x805442C0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = r31;
    r4 = (r1 + 16);
    r5 = (r1 + 12);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    InvokeDirectCpu<0x80547D30u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80546E98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80546EB4;
    }
}

loc_80546E9C:
{
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r6 = r30;
    r5 = MemoryInline::FlatRead32((r1 + 12));
    r4 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80547D74u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    goto loc_80546ED4;
}

loc_80546EB4:
{
    r3 = (r1 + 16);
    r4 = 0;
    // inline leaf 0x80544310 (2 guest instruction(s))
    MemoryInline::FlatWriteRam8((r3 + 10), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80544310
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r6 = r30;
    r5 = MemoryInline::FlatRead32((r1 + 12));
    r4 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80547D74u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
}

loc_80546ED4:
{
    r3 = (r1 + 16);
    r4 = -1;
    ctx->lr = 0x80546EE0u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8051C334u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547E1Cu) && KnownTranslatedCpuCall<0x80547E1Cu>::kAvailable && !KnownTranslatedCpuCall<0x80547E1Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547E1Cu>()) {
        const auto state_free_result_80547E1C_17031 = func_80547E1C_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_80547E1C_17031);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547E1Cu>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547F98u) && KnownTranslatedCpuCall<0x80547F98u>::kAvailable && !KnownTranslatedCpuCall<0x80547F98u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547F98u>()) {
        func_80547F98_statefree(r3, r4);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547F98u>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547E94u) && KnownTranslatedCpuCall<0x80547E94u>::kAvailable && !KnownTranslatedCpuCall<0x80547E94u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547E94u>()) {
        const auto state_free_result_80547E94_17C32 = func_80547E94_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_80547E94_17C32);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547E94u>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r27 = r3;
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547E8Cu) && KnownTranslatedCpuCall<0x80547E8Cu>::kAvailable && !KnownTranslatedCpuCall<0x80547E8Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547E8Cu>()) {
        const auto state_free_result_80547E8C_18273 = func_80547E8C_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_80547E8C_18273);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547E8Cu>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r28 = r3;
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547E84u) && KnownTranslatedCpuCall<0x80547E84u>::kAvailable && !KnownTranslatedCpuCall<0x80547E84u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547E84u>()) {
        const auto state_free_result_80547E84_188B4 = func_80547E84_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_80547E84_188B4);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547E84u>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r7 = r30;
    r5 = (r28 & 255);
    r4 = (r0 & 255);
    r6 = (r27 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80547E28u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    r27 = 0;
}

loc_80546F34:
{
    r3 = r31;
    r4 = (r27 & 255);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547E9Cu) && KnownTranslatedCpuCall<0x80547E9Cu>::kAvailable && !KnownTranslatedCpuCall<0x80547E9Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547E9Cu>()) {
        const auto state_free_result_80547E9C_1913E = func_80547E9C_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80547E9C_1913E);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547E9Cu>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r6 = r30;
    r4 = (r27 & 255);
    r5 = (r0 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80547EACu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(3));
}

loc_80546F60:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80546F34;
    }
}

loc_80546F64:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547F40u) && KnownTranslatedCpuCall<0x80547F40u>::kAvailable && !KnownTranslatedCpuCall<0x80547F40u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547F40u>()) {
        const auto state_free_result_80547F40_19A00 = func_80547F40_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_80547F40_19A00);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547F40u>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547F08u) && KnownTranslatedCpuCall<0x80547F08u>::kAvailable && !KnownTranslatedCpuCall<0x80547F08u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547F08u>()) {
        const auto state_free_result_80547F08_1A06B = func_80547F08_statefree(r3, r4, r5, ctr);
        ctr = static_cast<uint32_t>(state_free_result_80547F08_1A06B);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547F08u>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547F6Cu) && KnownTranslatedCpuCall<0x80547F6Cu>::kAvailable && !KnownTranslatedCpuCall<0x80547F6Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547F6Cu>()) {
        const auto state_free_result_80547F6C_1A6A6 = func_80547F6C_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_80547F6C_1A6A6);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547F6Cu>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80547F4Cu) && KnownTranslatedCpuCall<0x80547F4Cu>::kAvailable && !KnownTranslatedCpuCall<0x80547F4Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80547F4Cu>()) {
        func_80547F4C_statefree(r3, r4, r5);
    } else {
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80547F4Cu>(ctx);
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80547F78u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
}

loc_80546FA0:
{
    r27 = MemoryInline::FlatRead32((r1 + 44));
    r28 = MemoryInline::FlatRead32((r1 + 48));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r31 = MemoryInline::FlatRead32((r1 + 60));
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
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
// RECOMP_REGISTRATION base 0x805467D0 func_805467D0 preserves=true fpr_mask=0x00000000
