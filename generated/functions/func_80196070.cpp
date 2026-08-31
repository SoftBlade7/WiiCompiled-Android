#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80196070(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80196070;

loc_80196070:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r8 = (r3 + 196);
    r0 = (r3 + 244);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 176), 0, 1108u, true, false);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 176));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1032u, (r3 + 1208));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 180));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1036u, (r3 + 1212));
    f4.d = PpcFmulsInline(f5.d, f0.d);
    f2.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1008u, (r3 + 1184));
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = PpcFmulsInline(f5.d, f1.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f7.d = PpcFmulsInline(f7.d, f0.d);
    f8.d = PpcFmulsInline(f8.d, f0.d);
}

loc_801960B0:
{
    r4 = MemoryInline::FlatRead8((r8 + 8));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8019620C;
    }
}

loc_801960BC:
{
    f2.d = MemoryInline::FlatReadFloat32(r8);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f7.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1092u, (r3 + 1268));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f8.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f7.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f8.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_801960E0:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f4.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80196124;
    }
}

loc_801960F4:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1100u, (r3 + 1276));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_801960FC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80196124;
    }
}

loc_80196104:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1096u, (r3 + 1272));
    SetCRFloatResident(cr, 0, f6.d, f1.d);
}

loc_8019610C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80196124;
    }
}

loc_80196114:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1104u, (r3 + 1280));
    SetCRFloatResident(cr, 0, f6.d, f0.d);
}

loc_8019611C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8019619C;
    }
}

loc_80196124:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1092u, (r3 + 1268));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80196130:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019620C;
    }
}

loc_80196134:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1100u, (r3 + 1276));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019613C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019620C;
    }
}

loc_80196140:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1096u, (r3 + 1272));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019614C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019620C;
    }
}

loc_80196150:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1104u, (r3 + 1280));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80196158:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019620C;
    }
}

loc_8019615C:
{
    r5 = MemoryInline::FlatRead32(r8);
    r4 = 0;
    r7 = MemoryInline::FlatRead32((r8 + 4));
    r0 = -1;
    r6 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWrite32((r3 + 256), r5);
    r5 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWrite32((r3 + 260), r7);
    r7 = MemoryInline::FlatRead32((r8 + 8));
    MemoryInline::FlatWrite32((r3 + 264), r7);
    MemoryInline::FlatWrite32((r3 + 244), r6);
    MemoryInline::FlatWrite32((r3 + 248), r5);
    MemoryInline::FlatWrite8((r3 + 252), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 253), static_cast<uint8_t>(r0));
    r3 = -1;
    goto loc_8019621C;
}

loc_8019619C:
{
    SetCRFloatResident(cr, 0, f5.d, f3.d);
}

loc_801961A0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801961CC;
    }
}

loc_801961A8:
{
    SetCRFloatResident(cr, 0, f5.d, f2.d);
}

loc_801961AC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801961CC;
    }
}

loc_801961B4:
{
    SetCRFloatResident(cr, 0, f4.d, f1.d);
}

loc_801961B8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801961CC;
    }
}

loc_801961C0:
{
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_801961C4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8019620C;
    }
}

loc_801961CC:
{
    r5 = MemoryInline::FlatRead32(r8);
    r4 = 0;
    r7 = MemoryInline::FlatRead32((r8 + 4));
    r0 = -1;
    r6 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r3 + 244), r5);
    r5 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite32((r3 + 248), r7);
    r7 = MemoryInline::FlatRead32((r8 + 8));
    MemoryInline::FlatWrite32((r3 + 252), r7);
    MemoryInline::FlatWrite32((r3 + 256), r6);
    MemoryInline::FlatWrite32((r3 + 260), r5);
    MemoryInline::FlatWrite8((r3 + 264), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 265), static_cast<uint8_t>(r0));
    r3 = -1;
    goto loc_8019621C;
}

loc_8019620C:
{
    r8 = (r8 + 12);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r0));
}

loc_80196214:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801960B0;
    }
}

loc_80196218:
{
    r3 = 0;
}

loc_8019621C:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000011B gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x000001FF fpr_write=0x000001FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80196070 func_80196070 preserves=true fpr_mask=0x00000000
