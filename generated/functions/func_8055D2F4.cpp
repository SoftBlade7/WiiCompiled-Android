#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8055D2F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8055D2F4;

loc_8055D2F4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 72u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 4));
    r0 = (r5 & 800);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8055D2FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8055D300:
{
    r0 = (r5 & 4096);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8055D304:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8055D308:
{
    r0 = (r5 & 768);
}

loc_8055D30C:
{
    r6 = 0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8055D3DC;
    }
}

loc_8055D314:
{
    r0 = (r5 & 8192);
}

loc_8055D318:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8055D380;
    }
}

loc_8055D31C:
{
    r0 = (r5 & 256);
}

loc_8055D320:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8055D33C;
    }
}

loc_8055D324:
{
    r0 = 65536;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r5 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8055D350;
    }
}

loc_8055D334:
{
    r6 = 1;
    goto loc_8055D350;
}

loc_8055D33C:
{
    r0 = 65536;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r5 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8055D350;
    }
}

loc_8055D34C:
{
    r6 = 1;
}

loc_8055D350:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8055D354:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8055D400;
    }
}

loc_8055D358:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r3 + 68));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 68u, (r3 + 72));
    r6 = (r6 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 12));
    f0.d = MemoryInline::FlatReadFloat32(r5);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8055D374:
{
    r6 = cr;
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r6 = (r6_rot_1 & 1);
    goto loc_8055D400;
}

loc_8055D380:
{
    r0 = (r5 & 256);
}

loc_8055D384:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8055D3B0;
    }
}

loc_8055D388:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r3 + 68));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 68u, (r3 + 72));
    r6 = (r6 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 12));
    f0.d = MemoryInline::FlatReadFloat32(r5);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8055D3A4:
{
    r6 = cr;
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r6 = (r6_rot_2 & 1);
    goto loc_8055D400;
}

loc_8055D3B0:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r3 + 68));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 68u, (r3 + 72));
    r6 = (r6 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 12));
    f0.d = MemoryInline::FlatReadFloat32(r5);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8055D3CC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r6 = cr;
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r6 = (r6_rot_3 & 1);
    goto loc_8055D400;
}

loc_8055D3DC:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r3 + 68));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 68u, (r3 + 72));
    r6 = (r6 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 12));
    f0.d = MemoryInline::FlatReadFloat32(r5);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8055D3F8:
{
    r6 = cr;
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r6 = (r6_rot_4 & 1);
}

loc_8055D400:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8055D404:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8055D428;
    }
}

loc_8055D408:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 68u, (r3 + 72));
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r3 = MemoryInline::FlatRead16((r5 + 4));
    r0 = (r0 & 65535);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8055D428:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 68u, (r3 + 72));
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r3 = MemoryInline::FlatRead16((r5 + 4));
    r0 = (r0 & 65535);
    r0 = (r3 & ~r0);
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8055D2F4 func_8055D2F4 preserves=true fpr_mask=0x00000000
