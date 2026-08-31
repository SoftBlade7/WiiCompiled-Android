#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80780714(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    int32_t f10_ea_0 = 0;
    int32_t f11_ea_0 = 0;
    int32_t r0_ea_0 = 0;
    int32_t r0_ea_1 = 0;
    int32_t r0_ea_2 = 0;
    int32_t r3_ea_0 = 0;
    int32_t r3_ea_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80780714;

loc_80780714:
{
    MemoryInline::FlatWriteRam32((r1 + -240), r1);
    r1 = (r1 + -240);
    r0 = ctx->lr;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 244), r0);
    MemoryInline::FlatWriteRam32((r1 + 236), r31);
    MemoryInline::FlatWriteRam32((r1 + 232), r30);
    MemoryInline::FlatWriteRam32((r1 + 228), r29);
    r29 = r3;
    r3 = (r1 + 16);
    MemoryInline::FlatWriteRam32((r1 + 224), r28);
    r28 = 0x808A0000u;
    r28 = (r28 + 17872);
    // inline leaf 0x80780AA0 (6 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r4 = MemoryInline::FlatRead32((r5 + 160));
    r0 = MemoryInline::FlatRead32((r5 + 164));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam32(r3, r4);
    // end of inlined leaf 0x80780AA0
    r3 = (r1 + 8);
    r4 = 0;
    // inline leaf 0x80780AA0 (6 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r4 = MemoryInline::FlatRead32((r5 + 160));
    r0 = MemoryInline::FlatRead32((r5 + 164));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam32(r3, r4);
    // end of inlined leaf 0x80780AA0
    r3 = MemoryInline::FlatRead32((r29 + 260));
    f10_ea_0 = 48;
    f10.d = MemoryInline::FlatReadFloat32(f10_ea_0);
    r31 = MemoryInline::FlatRead32((r3 + 16));
    f11_ea_0 = 52;
    f11.d = MemoryInline::FlatReadFloat32(f11_ea_0);
    r30 = MemoryInline::FlatRead32((r31 + 108));
    guest_range_0 = MemoryInline::ResolveRangeHost(r28, 0, 48u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r28 + 8));
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 100), 0, 36u, true, false);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r30 + 116));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            f9.d = PpcBitCastToFloatInline(resolved_pair.first);
            f8.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f9.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r30 + 124));
            f8.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r30 + 128));
        }
    }
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f11.d));
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r30 + 132));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r30 + 112));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r30 + 120));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r30 + 100));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r28 + 36));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r30 + 104));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f11.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r30 + 108));
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 276));
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f11.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f9.d);
    MemoryInline::FlatWriteFloat32((r29 + 276), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 92));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f10.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f1.d);
    r0_ea_0 = 46;
    r0 = MemoryInline::FlatRead16(r0_ea_0);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f8.d);
    r0 = (r0 & 256);
}

loc_807807E8:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f2.d);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80780828;
    }
}

loc_807807FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 316));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 320));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 324));
    MemoryInline::FlatWriteFloat32((r29 + 316), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 320), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 80));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 324), f0.d);
}

loc_80780828:
{
    r0_ea_1 = 46;
    r0 = MemoryInline::FlatRead16(r0_ea_1);
    r0 = (r0 & 512);
}

loc_80780830:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80780870;
    }
}

loc_80780834:
{
    r3 = (r1 + 60);
    r4 = (r1 + 72);
    // inline leaf 0x805147D4 (10 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f2.d = (-(f2.d));
    f1.d = (-(f1.d));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    // end of inlined leaf 0x805147D4
    f1.d = MemoryInline::FlatReadFloat32((r29 + 316));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 320));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 324));
    MemoryInline::FlatWriteFloat32((r29 + 316), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 320), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 324), f0.d);
}

loc_80780870:
{
    r3_ea_0 = 46;
    r3 = MemoryInline::FlatRead16(r3_ea_0);
    r4 = (r3 & 1);
}

loc_80780878:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80780884;
    }
}

loc_8078087C:
{
    r0 = (r3 & 2);
}

loc_80780880:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80780930;
    }
}

loc_80780884:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80780888:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r28);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80780898;
    }
}

loc_80780890:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r28 + 8));
    goto loc_807808A4;
}

loc_80780898:
{
    r0 = (r3 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8078089C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807808A4;
    }
}

loc_807808A0:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r28 + 40));
}

loc_807808A4:
{
    r4 = 0x802A0000u;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r28 + 44));
    r3 = (r4 + 16640);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 16640));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r4 = 0x802A0000u;
    MemoryInline::FlatWriteRamFloat32((r1 + 180), f3.d);
    r3 = (r1 + 168);
    MemoryInline::FlatWriteRamFloat32((r1 + 196), f2.d);
    r4 = (r4 + 16688);
    MemoryInline::FlatWriteRamFloat32((r1 + 212), f0.d);
    ctx->lr = 0x807808DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->cr = cr;
    InvokeDirectCpu<0x802303BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    cr = ctx->cr;
    r3 = (r1 + 48);
    r4 = (r1 + 168);
    r5 = (r1 + 84);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    InvokeDirectCpu<0x802303F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f2.d = MemoryInline::FlatReadFloat32((r1 + 48));
    r3 = (r1 + 36);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    r4 = (r1 + 168);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    r5 = (r29 + 264);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    InvokeDirectCpu<0x802303F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    MemoryInline::FlatWriteFloat32((r29 + 264), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteFloat32((r29 + 268), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    MemoryInline::FlatWriteFloat32((r29 + 272), f0.d);
    goto loc_807809D8;
}

loc_80780930:
{
    r4 = (r3 & 8);
}

loc_80780934:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80780940;
    }
}

loc_80780938:
{
    r0 = (r3 & 4);
}

loc_8078093C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807809D8;
    }
}

loc_80780940:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80780944:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r28);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80780954;
    }
}

loc_8078094C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r28 + 8));
    goto loc_80780960;
}

loc_80780954:
{
    r0 = (r3 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80780958:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80780960;
    }
}

loc_8078095C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r28 + 40));
}

loc_80780960:
{
    r4 = 0x802A0000u;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r28 + 44));
    r3 = (r4 + 16640);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 16640));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r3 = (r1 + 120);
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f3.d);
    r4 = (r29 + 264);
    MemoryInline::FlatWriteRamFloat32((r1 + 148), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 164), f0.d);
    ctx->lr = 0x80780994u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->cr = cr;
    InvokeDirectCpu<0x802303BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 88));
    r3 = (r1 + 24);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 276));
    r4 = (r1 + 120);
    r5 = (r1 + 84);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    InvokeDirectCpu<0x802303F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f2.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 276));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f0.d);
}

loc_807809D8:
{
    r3_ea_1 = 46;
    r3 = MemoryInline::FlatRead16(r3_ea_1);
    r0_ea_2 = 70;
    r0 = MemoryInline::FlatRead16(r0_ea_2);
    r0 = (r3 & ~r0);
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807809E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80780A0C;
    }
}

loc_807809EC:
{
    r0 = MemoryInline::FlatRead8((r29 + 280));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807809F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80780A04;
    }
}

loc_807809F8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 280), static_cast<uint8_t>(r0));
    goto loc_80780A0C;
}

loc_80780A04:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 280), static_cast<uint8_t>(r0));
}

loc_80780A0C:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 84), 0, 36u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r1 + 96));
    r3 = r30;
    guest_range_3 = MemoryInline::ResolveRangeHost((r30 + 100), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r30 + 124), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r1 + 100));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r30 + 128), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r1 + 104));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r30 + 132), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r1 + 108));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r30 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 28u, (r1 + 112));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r30 + 116), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r1 + 116));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r30 + 120), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r1 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r30 + 100), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r1 + 88));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r30 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r1 + 92));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r30 + 108), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 316));
    MemoryInline::FlatWriteFloat32((r31 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 320));
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 324));
    MemoryInline::FlatWriteFloat32((r31 + 48), f0.d);
    r12 = MemoryInline::FlatRead32(r30);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x80780A80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 244));
    r31 = MemoryInline::FlatRead32((r1 + 236));
    r30 = MemoryInline::FlatRead32((r1 + 232));
    r29 = MemoryInline::FlatRead32((r1 + 228));
    r28 = MemoryInline::FlatRead32((r1 + 224));
    ctx->lr = r0;
    r1 = (r1 + 240);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80780714 func_80780714 preserves=true fpr_mask=0x00000000
