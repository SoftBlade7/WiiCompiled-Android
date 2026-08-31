#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066DD94(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8066DD94;

loc_8066DD94:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -896), 0, 904u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -896), r1);
    r1 = (r1 + -896);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 900u, (r1 + 900), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 872u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_2, 872u, (r1 + 872), r26);
        MemoryInline::WriteResolved32(guest_range_2, 876u, (r1 + 876), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 880u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 880u, (r1 + 880), r28);
        MemoryInline::WriteResolved32(guest_range_2, 884u, (r1 + 884), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 888u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 888u, (r1 + 888), r30);
        MemoryInline::WriteResolved32(guest_range_2, 892u, (r1 + 892), r31);
    }
    r30 = r3;
    r31 = r4;
    r26 = r5;
    r0 = MemoryInline::FlatRead32((r3 + 16884));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066DDB8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066DDCC;
    }
}

loc_8066DDBC:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 20), r0);
    r3 = 0;
    goto loc_8066E034;
}

loc_8066DDCC:
{
    r3 = MemoryInline::FlatRead32((r3 + 30076));
    // inline leaf 0x802331F8 (9 guest instruction(s))
}

loc_inl0_0x802331F8:
{
    r0 = (r3 + -4);
}

loc_inl0_0x80233200:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl0_0x8023320C;
    }
}

loc_inl0_0x80233204:
{
}

loc_inl0_0x80233208:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(7))) {
        goto loc_inl0_0x80233214;
    }
}

loc_inl0_0x8023320C:
{
    r3 = 1;
    goto loc_inl0_cont_802331F8;
}

loc_inl0_0x80233214:
{
    r3 = 0;
}

loc_inl0_cont_802331F8:
{
    // end of inlined leaf 0x802331F8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066DDD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066DDEC;
    }
}

loc_8066DDDC:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r30 + 20), r0);
    r3 = 0;
    goto loc_8066E034;
}

loc_8066DDEC:
{
    r3 = (r30 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -30284));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_8066DDF8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8066DE1C;
    }
}

loc_8066DDFC:
{
    r3 = 0;
    r4 = 9;
    r0 = 6;
    MemoryInline::FlatWrite32((r30 + 28), r3);
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 30076), r4);
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_8066E034;
}

loc_8066DE1C:
{
    r3 = r26;
    ctx->lr = 0x8066DE24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051C120u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066DE28:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066DE4C;
    }
}

loc_8066DE2C:
{
    r3 = 0;
    r4 = 1;
    r0 = 6;
    MemoryInline::FlatWrite32((r30 + 28), r3);
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 30076), r4);
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_8066E034;
}

loc_8066DE4C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 8u, true, false);
    r9 = MemoryInline::ReadResolved8(guest_range_1, 0u, r31);
    r28 = (r30 + 16924);
    r8 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r31 + 1));
    r27 = (r30 + 16952);
    r7 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r31 + 2));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r31 + 3));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r31 + 4));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r31 + 5));
    r3 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r31 + 6));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r31 + 7));
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 16924), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r30 + 16924), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r30 + 16925), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r30 + 16926), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r30 + 16927), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r30 + 16928), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r30 + 16929), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r30 + 16930), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r30 + 16931), static_cast<uint8_t>(r0));
    // inline leaf 0x801D2724 (3 guest instruction(s))
    r3 = 0x80250000u;
    r3 = (r3 + 12176);
    // end of inlined leaf 0x801D2724
    r29 = 0x808A0000u;
    r4 = r3;
    r3 = (r1 + 216);
    r6 = 20;
    r5 = (r29 + -22136);
    ctx->lr = 0x8066DEB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D2ACCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = r28;
    r3 = (r1 + 216);
    r5 = 8;
    ctx->lr = 0x8066DEC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D2D08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 216);
    r4 = (r30 + 16904);
    ctx->lr = 0x8066DECCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D2D18u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r26;
    r4 = r27;
    ctx->lr = 0x8066DED8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051D0E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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

loc_8066DEDC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066DF00;
    }
}

loc_8066DEE0:
{
    r3 = 0;
    r4 = 1;
    r0 = 6;
    MemoryInline::FlatWrite32((r30 + 28), r3);
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 30076), r4);
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_8066E034;
}

loc_8066DF00:
{
    r3 = r27;
    ctx->lr = 0x8066DF08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051D388u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = r3;
    // inline leaf 0x801D2724 (3 guest instruction(s))
    r3 = 0x80250000u;
    r3 = (r3 + 12176);
    // end of inlined leaf 0x801D2724
    r4 = r3;
    r3 = (r1 + 16);
    r5 = (r29 + -22136);
    r6 = 20;
    ctx->lr = 0x8066DF24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D2ACCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = r27;
    r5 = r28;
    r3 = (r1 + 16);
    ctx->lr = 0x8066DF34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D2D08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 16);
    r4 = (r30 + 16932);
    ctx->lr = 0x8066DF40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D2D18u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x808B0000u;
    r3 = (r1 + 424);
    r4 = (r4 + 11400);
    MemoryInline::FlatWriteRam32((r1 + 416), r4);
    r4 = 0;
    r5 = 448;
    ctx->lr = 0x8066DF5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066DF6C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8066DF8C;
    }
}

loc_8066DF70:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r29 = (r3 + 56);
    goto loc_8066DF90;
}

loc_8066DF8C:
{
    r29 = 0;
}

loc_8066DF90:
{
    r28 = 0;
}

loc_8066DF94:
{
    r0 = (r28 & 65535);
    r3 = (r1 + 416);
    r0 = (r0 * 448);
    r4 = (r29 + r0);
    r4 = (r4 + 22992);
    ctx->lr = 0x8066DFACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x805196B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066DFB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066DFDC;
    }
}

loc_8066DFB4:
{
    r3 = (r1 + 8);
    r4 = (r1 + 424);
    r5 = 8;
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
    r3 = r31;
    r4 = (r1 + 8);
    r5 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066DFD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066DFE8;
    }
}

loc_8066DFDC:
{
    r28 = (r28 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(30));
}

loc_8066DFE4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8066DF94;
    }
}

loc_8066DFE8:
{
    r6 = MemoryInline::FlatRead32((r1 + 432));
    r4 = 0x80670000u;
    r3 = MemoryInline::FlatRead32((r1 + 436));
    r8 = 0;
    r7 = 1;
    r0 = 10;
    MemoryInline::FlatWrite32((r30 + 16900), r3);
    r5 = r30;
    r3 = MemoryInline::FlatRead32((r30 + 44));
    r4 = (r4 + -8120);
    MemoryInline::FlatWrite32((r30 + 16896), r6);
    r6 = 0;
    MemoryInline::FlatWrite32((r30 + 20), r8);
    MemoryInline::FlatWrite32((r30 + 16), r7);
    MemoryInline::FlatWrite32((r30 + 30072), r0);
    MemoryInline::FlatWrite8((r30 + 40), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite32((r30 + 24), r8);
    ctx->lr = 0x8066E030u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80242C18u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 1;
}

loc_8066E034:
{
    r26 = MemoryInline::FlatRead32((r1 + 872));
    r27 = MemoryInline::FlatRead32((r1 + 876));
    r28 = MemoryInline::FlatRead32((r1 + 880));
    r29 = MemoryInline::FlatRead32((r1 + 884));
    r30 = MemoryInline::FlatRead32((r1 + 888));
    r31 = MemoryInline::FlatRead32((r1 + 892));
    r0 = MemoryInline::FlatRead32((r1 + 900));
    ctx->lr = r0;
    r1 = (r1 + 896);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
// RECOMP_REGISTRATION base 0x8066DD94 func_8066DD94 preserves=true fpr_mask=0x00000000
