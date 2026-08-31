#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8075D378(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8075D378;

loc_8075D378:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    r5 = 0x808A0000u;
    MemoryInline::WriteResolved32(guest_range_1, 84u, (r1 + 84), r0);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 13812));
    MemoryInline::WriteResolved32(guest_range_1, 76u, (r1 + 76), r31);
    r31 = r6;
    MemoryInline::WriteResolved32(guest_range_1, 72u, (r1 + 72), r30);
    r30 = r4;
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r29);
    r29 = r3;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r1 + 44), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r1 + 48), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r1 + 52), f0.d);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 16), 0, 24u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 36));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 20));
}

loc_8075D3BC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8075D430;
    }
}

loc_8075D3C0:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 16));
    r0 = MemoryInline::FlatRead32((r3 + 228));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8075D3CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8075D3F0;
    }
}

loc_8075D3D0:
{
    r5 = 0x802A0000u;
    r3 = r30;
    r4 = (r5 + 16640);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16640));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80067920u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    goto loc_8075D424;
}

loc_8075D3F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8075D424;
    }
}

loc_8075D3F4:
{
    r0 = MemoryInline::FlatRead8((r3 + 248));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8075D3FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8075D424;
    }
}

loc_8075D400:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 232));
    r3 = (r1 + 32);
    r4 = (r1 + 44);
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
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r3 = r30;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 40));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80067920u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
}

loc_8075D424:
{
    r0 = MemoryInline::FlatRead32((r29 + 24));
    MemoryInline::FlatWrite32((r29 + 36), r0);
    goto loc_8075D568;
}

loc_8075D430:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 24));
}

loc_8075D438:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8075D4AC;
    }
}

loc_8075D43C:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 16));
    r0 = MemoryInline::FlatRead32((r3 + 228));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8075D448:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8075D46C;
    }
}

loc_8075D44C:
{
    r5 = 0x802A0000u;
    r3 = r30;
    r4 = (r5 + 16640);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16640));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80067920u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    goto loc_8075D4A0;
}

loc_8075D46C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8075D4A0;
    }
}

loc_8075D470:
{
    r0 = MemoryInline::FlatRead8((r3 + 248));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8075D478:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8075D4A0;
    }
}

loc_8075D47C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 232));
    r3 = (r1 + 20);
    r4 = (r1 + 44);
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
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r3 = r30;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 28));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80067920u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
}

loc_8075D4A0:
{
    r0 = MemoryInline::FlatRead32((r29 + 28));
    MemoryInline::FlatWrite32((r29 + 36), r0);
    goto loc_8075D568;
}

loc_8075D4AC:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 28));
}

loc_8075D4B4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8075D528;
    }
}

loc_8075D4B8:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 16));
    r0 = MemoryInline::FlatRead32((r3 + 228));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8075D4C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8075D4E8;
    }
}

loc_8075D4C8:
{
    r5 = 0x802A0000u;
    r3 = r30;
    r4 = (r5 + 16640);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16640));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80067920u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    goto loc_8075D51C;
}

loc_8075D4E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8075D51C;
    }
}

loc_8075D4EC:
{
    r0 = MemoryInline::FlatRead8((r3 + 248));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8075D4F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8075D51C;
    }
}

loc_8075D4F8:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 232));
    r3 = (r1 + 8);
    r4 = (r1 + 44);
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
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = r30;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 16));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80067920u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
}

loc_8075D51C:
{
    r0 = MemoryInline::FlatRead32((r29 + 32));
    MemoryInline::FlatWrite32((r29 + 36), r0);
    goto loc_8075D568;
}

loc_8075D528:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8075D530:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8075D568;
    }
}

loc_8075D534:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 16));
    r0 = MemoryInline::FlatRead32((r3 + 228));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8075D540:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8075D560;
    }
}

loc_8075D544:
{
    r5 = 0x802A0000u;
    r3 = r30;
    r4 = (r5 + 16640);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16640));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80067920u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
}

loc_8075D560:
{
    r0 = MemoryInline::FlatRead32((r29 + 20));
    MemoryInline::FlatWrite32((r29 + 36), r0);
}

loc_8075D568:
{
    r0 = MemoryInline::FlatRead32((r29 + 36));
    MemoryInline::FlatWrite16((r31 + 6), static_cast<uint16_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    r29 = MemoryInline::FlatRead32((r1 + 68));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000007F gpr_write=0xE000003B gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8075D378 func_8075D378 preserves=true fpr_mask=0x00000000
