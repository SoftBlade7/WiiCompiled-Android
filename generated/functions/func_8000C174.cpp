#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000C174(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8000C174;

loc_8000C174:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 52u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 4));
    r6 = 0;
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
    r4 = (r4_rot_0 & 7);
    r0 = (r4 + 255);
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8000C18C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8000C19C;
    }
}

loc_8000C190:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 10));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000C198:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000C1AC;
    }
}

loc_8000C19C:
{
    r0 = 40;
    MemoryInline::FlatWrite32((r13 + -27600), r0);
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8000C1AC:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 8));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r5 = (r5_rot_0 & 7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8000C1B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000C1C0;
    }
}

loc_8000C1B8:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 24));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8000C1C0:
{
    r8 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 28));
}

loc_8000C1C8:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 36));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r3 + 52));
    r4 = (r4 - r8);
    r7 = (r0 + r4);
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(3))) {
        goto loc_8000C1E4;
    }
}

loc_8000C1DC:
{
    r6 = (r5 + -2);
    r7 = (r7 - r6);
}

loc_8000C1E4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 4));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(13));
    r0 = (r0_rot_0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000C1EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000C214;
    }
}

loc_8000C1F0:
{
    r0 = (r4 - r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    ctr = r0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000C214;
    }
}

loc_8000C1FC:
{
    r0 = MemoryInline::FlatRead8(r8);
    r8 = (r8 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
}

loc_8000C208:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000C210;
    }
}

loc_8000C20C:
{
    r7 = (r7 + 1);
}

loc_8000C210:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8000C1FC;
    }
}

loc_8000C214:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000021F9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8000C174 func_8000C174 preserves=true fpr_mask=0x00000000
