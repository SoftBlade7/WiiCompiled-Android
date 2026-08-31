#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80560D20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_stbux_80560FCC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80560D20;

loc_80560D20:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r4 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 5100));
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 40));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_80560D48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80560F10;
    }
}

loc_80560D4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80560D5C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80560D64;
    }
}

loc_80560D60:
{
    MemoryInline::FlatWriteFloat32((r3 + 40), f1.d);
}

loc_80560D64:
{
    r4 = MemoryInline::FlatRead32((r3 + 20));
    r0 = MemoryInline::FlatRead8((r3 + 33));
    r3 = (r3 + 44);
    r5 = MemoryInline::FlatRead32((r4 + 12));
    r4 = r3;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 40));
    r5_addr_0 = (r5 + r0);
    r30 = MemoryInline::FlatRead32(r5_addr_0);
    r5 = (r30 + 20);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x805AECA8u>(ctx);
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    r3 = (r31 + 56);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 40));
    r4 = r3;
    r5 = (r30 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x805AECA8u>(ctx);
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    r3 = (r31 + 68);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 40));
    r4 = r3;
    r5 = (r30 + 44);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x805AED14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    r5 = MemoryInline::FlatRead32((r31 + 20));
    r3 = (r31 + 72);
    r0 = MemoryInline::FlatRead8((r31 + 33));
    r4 = r3;
    r5 = MemoryInline::FlatRead32((r5 + 16));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 40));
    r5 = (r5 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x805AED14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    r0 = MemoryInline::FlatRead8((r31 + 68));
    MemoryInline::FlatWriteRam8((r1 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 69));
    MemoryInline::FlatWriteRam8((r1 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 70));
    MemoryInline::FlatWriteRam8((r1 + 34), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 71));
    MemoryInline::FlatWriteRam8((r1 + 35), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 84));
    r5 = MemoryInline::FlatRead8((r31 + 72));
    r4 = MemoryInline::FlatRead8((r31 + 73));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80560E08:
{
    r3 = MemoryInline::FlatRead8((r31 + 74));
    r0 = MemoryInline::FlatRead8((r31 + 75));
    MemoryInline::FlatWrite8((r31 + 76), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r31 + 77), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r31 + 78), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 79), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80560E44;
    }
}

loc_80560E24:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 80));
    r3 = (r1 + 32);
    r4 = (r31 + 68);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x805AEE14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f1.d = MemoryInline::FlatReadFloat32((r31 + 80));
    r3 = (r31 + 76);
    r4 = (r31 + 72);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x805AEE14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
}

loc_80560E44:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 24), 0, 56u, true, false);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 52u, (r31 + 76));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 53u, (r31 + 77));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 54u, (r31 + 78));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 55u, (r31 + 79));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 24));
    r30 = MemoryInline::FlatRead32((r1 + 32));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r31 + 44));
    MemoryInline::FlatWriteFloat32((r3 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 48));
    MemoryInline::FlatWriteFloat32((r3 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 52));
    MemoryInline::FlatWriteRam8((r1 + 24), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 25), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 26), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 27), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r3 + 28), f0.d);
    ctx->lr = 0x80560E88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022C1BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r31 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 56));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 60));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 64));
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    ctx->lr = 0x80560EA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022C1BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r3 = MemoryInline::FlatRead32((r31 + 24));
    r0 = MemoryInline::FlatRead8((r1 + 8));
    MemoryInline::FlatWrite8((r3 + 44), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 9));
    MemoryInline::FlatWrite8((r3 + 45), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 10));
    MemoryInline::FlatWrite8((r3 + 46), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 11));
    MemoryInline::FlatWrite8((r3 + 47), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r1 + 24));
    r0 = MemoryInline::FlatRead32((r31 + 28));
    r3 = MemoryInline::FlatRead32((r31 + 20));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & 2040);
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r3 = MemoryInline::FlatRead8((r1 + 12));
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r1 + 13));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r1 + 14));
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 15));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
    goto loc_80560FE8;
}

loc_80560F10:
{
    r0 = MemoryInline::FlatRead8((r3 + 84));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80560F18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80560FE8;
    }
}

loc_80560F1C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 68), 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r3 + 68));
    r4 = (r31 + 68);
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r3 + 69));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r3 + 70));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r3 + 71));
    MemoryInline::FlatWriteRam8((r1 + 31), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r3 + 72));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r3 + 73));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r3 + 74));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r3 + 75));
    MemoryInline::FlatWrite8((r3 + 76), static_cast<uint8_t>(r7));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 80));
    MemoryInline::FlatWrite8((r3 + 77), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 78), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 79), static_cast<uint8_t>(r0));
    r3 = (r1 + 28);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x805AEE14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f1.d = MemoryInline::FlatReadFloat32((r31 + 80));
    r3 = (r31 + 76);
    r4 = (r31 + 72);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x805AEE14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    r0 = MemoryInline::FlatRead32((r1 + 28));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r7 = MemoryInline::FlatRead8((r31 + 76));
    r6 = MemoryInline::FlatRead8((r31 + 77));
    r5 = MemoryInline::FlatRead8((r31 + 78));
    r4 = MemoryInline::FlatRead8((r31 + 79));
    r3 = MemoryInline::FlatRead32((r31 + 24));
    r0 = MemoryInline::FlatRead8((r1 + 20));
    MemoryInline::FlatWrite8((r3 + 44), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 21));
    MemoryInline::FlatWrite8((r3 + 45), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 22));
    MemoryInline::FlatWrite8((r3 + 46), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 23));
    MemoryInline::FlatWrite8((r3 + 47), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r31 + 20));
    r0 = MemoryInline::FlatRead32((r31 + 28));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & 2040);
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r7));
    addr_stbux_80560FCC_loc_0 = (r3 + r0);
    MemoryInline::FlatWrite8(addr_stbux_80560FCC_loc_0, static_cast<uint8_t>(r7));
    r3 = addr_stbux_80560FCC_loc_0;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r4));
}

loc_80560FE8:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00000FF gpr_write=0xC0001FFB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80560D20 func_80560D20 preserves=true fpr_mask=0x00000000
