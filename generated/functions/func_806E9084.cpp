#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806E9084(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80537B88_loc_0 = 0;
    uint32_t addr_lfsx_80537B88_loc_1 = 0;
    uint32_t addr_lfsx_80537B88_loc_2 = 0;
    uint32_t addr_lfsx_80537B88_loc_3 = 0;
    uint32_t addr_lfsx_80537B88_loc_4 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806E9084;

loc_806E9084:
{
    MemoryInline::FlatWriteRam32((r1 + -432), r1);
    r1 = (r1 + -432);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 436), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 416), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 424);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRam32((r1 + 412), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 408), r30);
    r30 = 0x808A0000u;
    r30 = (r30 + 2160);
    r0 = MemoryInline::FlatRead16((r3 + 180));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_806E90B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806E9444;
    }
}

loc_806E90B8:
{
    r3 = 0x802A0000u;
    r4 = (r31 + 276);
    r3 = (r3 + 16688);
    r5 = (r1 + 248);
    ctx->lr = 0x806E90CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B41E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    r3 = 0x802A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 44));
    r5 = (r3 + 16640);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16640));
    f3.d = MemoryInline::FlatReadFloat32((r5 + 4));
    r3 = (r1 + 296);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 8));
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRamFloat32((r1 + 260), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 276), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 292), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 272));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    ctx->lr = 0x806E9114u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FE14u>(ctx);
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r31 + 1272));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_806E911C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806E9130;
    }
}

loc_806E9120:
{
    r3 = (r1 + 248);
    r4 = (r1 + 296);
    r5 = r3;
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
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80230410u>(ctx);
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
}

loc_806E9130:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 48));
    r0 = 0;
    MemoryInline::FlatWriteRamFloat32((r1 + 260), f0.d);
    r3 = r31;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 52));
    MemoryInline::FlatWriteRamFloat32((r1 + 276), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 56));
    MemoryInline::FlatWriteRamFloat32((r1 + 292), f0.d);
    r4 = MemoryInline::FlatRead16((r31 + 44));
    MemoryInline::FlatWrite8((r31 + 84), static_cast<uint8_t>(r0));
    r0 = (r4 | 4);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 248));
    MemoryInline::FlatWriteFloat32((r31 + 88), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 252));
    MemoryInline::FlatWriteFloat32((r31 + 92), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 256));
    MemoryInline::FlatWriteFloat32((r31 + 96), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 260));
    MemoryInline::FlatWriteFloat32((r31 + 100), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 264));
    MemoryInline::FlatWriteFloat32((r31 + 104), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 268));
    MemoryInline::FlatWriteFloat32((r31 + 108), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 272));
    MemoryInline::FlatWriteFloat32((r31 + 112), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 276));
    MemoryInline::FlatWriteFloat32((r31 + 116), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 280));
    MemoryInline::FlatWriteFloat32((r31 + 120), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 284));
    MemoryInline::FlatWriteFloat32((r31 + 124), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 288));
    MemoryInline::FlatWriteFloat32((r31 + 128), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 292));
    MemoryInline::FlatWriteFloat32((r31 + 132), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 260));
    MemoryInline::FlatWriteFloat32((r31 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 276));
    MemoryInline::FlatWriteFloat32((r31 + 52), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 292));
    MemoryInline::FlatWriteFloat32((r31 + 56), f0.d);
    ctx->lr = 0x806E91DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80821640u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 60), 0, 76u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 88));
    r3 = (r1 + 224);
    MemoryInline::FlatWriteRamFloat32((r1 + 344), f0.d);
    r4 = (r1 + 344);
    r5 = 3;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 92));
    MemoryInline::FlatWriteRamFloat32((r1 + 348), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 96));
    MemoryInline::FlatWriteRamFloat32((r1 + 352), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r31 + 100));
    MemoryInline::FlatWriteRamFloat32((r1 + 356), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r31 + 104));
    MemoryInline::FlatWriteRamFloat32((r1 + 360), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r31 + 108));
    MemoryInline::FlatWriteRamFloat32((r1 + 364), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r31 + 112));
    MemoryInline::FlatWriteRamFloat32((r1 + 368), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r31 + 116));
    MemoryInline::FlatWriteRamFloat32((r1 + 372), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r31 + 120));
    MemoryInline::FlatWriteRamFloat32((r1 + 376), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r31 + 124));
    MemoryInline::FlatWriteRamFloat32((r1 + 380), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r31 + 128));
    MemoryInline::FlatWriteRamFloat32((r1 + 384), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 72u, (r31 + 132));
    MemoryInline::FlatWriteRamFloat32((r1 + 388), f0.d);
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 60));
    // inline leaf 0x80537B80 (9 guest instruction(s))
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = (r4 + r0);
    addr_lfsx_80537B88_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80537B88_loc_0);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80537B80
    r3 = (r1 + 212);
    r4 = (r1 + 344);
    r5 = 2;
    // inline leaf 0x80537B80 (9 guest instruction(s))
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r5 = (r4 + r0);
    addr_lfsx_80537B88_loc_1 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80537B88_loc_1);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80537B80
    f1.d = MemoryInline::FlatReadFloat32((r30 + 228));
    r3 = (r1 + 200);
    r4 = (r1 + 212);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = f31.d;
    r3 = (r1 + 188);
    r4 = (r1 + 200);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    r3 = (r1 + 176);
    r4 = (r1 + 224);
    r5 = (r1 + 188);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    f2.d = MemoryInline::FlatReadFloat32((r1 + 176));
    r3 = (r1 + 164);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 180));
    r4 = (r1 + 344);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 184));
    r5 = 3;
    MemoryInline::FlatWriteRamFloat32((r1 + 356), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 372), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 388), f0.d);
    // inline leaf 0x80537B80 (9 guest instruction(s))
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r5 = (r4 + r0);
    addr_lfsx_80537B88_loc_2 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80537B88_loc_2);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80537B80
    r3 = (r1 + 152);
    r4 = (r1 + 344);
    r5 = 2;
    // inline leaf 0x80537B80 (9 guest instruction(s))
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r5 = (r4 + r0);
    addr_lfsx_80537B88_loc_3 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80537B88_loc_3);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80537B80
    f1.d = MemoryInline::FlatReadFloat32((r30 + 232));
    r3 = (r1 + 140);
    r4 = (r1 + 152);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = f31.d;
    r3 = (r1 + 128);
    r4 = (r1 + 140);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    r3 = (r1 + 116);
    r4 = (r1 + 164);
    r5 = (r1 + 128);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    r3 = (r1 + 104);
    r4 = (r1 + 344);
    r5 = 1;
    // inline leaf 0x80537B80 (9 guest instruction(s))
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r5 = (r4 + r0);
    addr_lfsx_80537B88_loc_4 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80537B88_loc_4);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80537B80
    f1.d = MemoryInline::FlatReadFloat32((r30 + 72));
    r3 = (r1 + 92);
    r4 = (r1 + 104);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = f31.d;
    r3 = (r1 + 80);
    r4 = (r1 + 92);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    r3 = (r1 + 68);
    r4 = (r1 + 116);
    r5 = (r1 + 80);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80514838u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    r3 = (r1 + 236);
    MemoryInline::FlatWriteFloat32((r31 + 1104), f0.d);
    r4 = (r31 + 1104);
    r5 = (r31 + 1140);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    MemoryInline::FlatWriteFloat32((r31 + 1108), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    MemoryInline::FlatWriteFloat32((r31 + 1112), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x8051486Cu>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r3 = (r1 + 236);
    ctx->lr = 0x806E9368u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r31 + 1100));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 392), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    r0 = (r3 ^ -2147483648);
    f5.d = MemoryInline::FlatReadFloat64((r30 + 48));
    MemoryInline::FlatWriteRam32((r1 + 396), r0);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 1180));
    f4.d = MemoryInline::FlatReadFloat64((r1 + 392));
    MemoryInline::FlatWriteFloat32((r31 + 1256), f1.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f5.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f1.d = PpcFmulsInline(f3.d, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806E93A4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806E93B4;
    }
}

loc_806E93A8:
{
    r0 = MemoryInline::FlatRead8((r31 + 1240));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806E93B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806E9444;
    }
}

loc_806E93B4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 1172), static_cast<uint8_t>(r0));
    r3 = (r1 + 56);
    r4 = (r1 + 236);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x80514810u>(ctx);
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r3 = (r1 + 44);
    r4 = (r31 + 48);
    r5 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x8051486Cu>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r0 = MemoryInline::FlatRead16((r31 + 44));
    r5 = 0x808C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    r3 = (r1 + 32);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    r0 = (r0 | 1);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 44));
    r4 = (r1 + 236);
    MemoryInline::FlatWriteFloat32((r31 + 48), f2.d);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r31 + 52), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 56), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 28820));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x80514810u>(ctx);
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r3 = (r1 + 20);
    r4 = (r31 + 48);
    r5 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80514838u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r0 = MemoryInline::FlatRead16((r31 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r0 = (r0 | 1);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteFloat32((r31 + 48), f2.d);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r31 + 52), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 56), f0.d);
}

loc_806E9444:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 436));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 416));
    r31 = MemoryInline::FlatRead32((r1 + 412));
    r30 = MemoryInline::FlatRead32((r1 + 408));
    ctx->lr = r0;
    r1 = (r1 + 432);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000003F gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0xFC00C03F fpr_write=0xFC00FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806E9084 func_806E9084 preserves=false fpr_mask=0x80000000
