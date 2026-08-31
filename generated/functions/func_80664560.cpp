#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80664560(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80664560;

loc_80664560:
{
    r0 = 3;
    r6 = 0;
    ctr = r0;
}

loc_8066456C:
{
    r0 = (r6 & 255);
    r0 = (r0 * 48);
    r4 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r4 + 52));
}

loc_80664580:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(66))) {
        goto loc_8066458C;
    }
}

loc_80664584:
{
    r0 = r5;
    goto loc_80664590;
}

loc_8066458C:
{
    r0 = -1;
}

loc_80664590:
{
}

loc_80664594:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_806645BC;
    }
}

loc_80664598:
{
    r0 = MemoryInline::FlatRead32((r4 + 32));
}

loc_806645A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806645BC;
    }
}

loc_806645A4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(66));
}

loc_806645A8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806645B4;
    }
}

loc_806645AC:
{
    r3 = MemoryInline::FlatRead32((r4 + 52));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_806645B4:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_806645BC:
{
    r6 = (r6 + 1);
    r0 = (r6 & 255);
    r0 = (r0 * 48);
    r4 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r4 + 52));
}

loc_806645D4:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(66))) {
        goto loc_806645E0;
    }
}

loc_806645D8:
{
    r0 = r5;
    goto loc_806645E4;
}

loc_806645E0:
{
    r0 = -1;
}

loc_806645E4:
{
}

loc_806645E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_80664610;
    }
}

loc_806645EC:
{
    r0 = MemoryInline::FlatRead32((r4 + 32));
}

loc_806645F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80664610;
    }
}

loc_806645F8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(66));
}

loc_806645FC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80664608;
    }
}

loc_80664600:
{
    r3 = MemoryInline::FlatRead32((r4 + 52));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80664608:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80664610:
{
    r6 = (r6 + 1);
    r0 = (r6 & 255);
    r0 = (r0 * 48);
    r4 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r4 + 52));
}

loc_80664628:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(66))) {
        goto loc_80664634;
    }
}

loc_8066462C:
{
    r0 = r5;
    goto loc_80664638;
}

loc_80664634:
{
    r0 = -1;
}

loc_80664638:
{
}

loc_8066463C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_80664664;
    }
}

loc_80664640:
{
    r0 = MemoryInline::FlatRead32((r4 + 32));
}

loc_80664648:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80664664;
    }
}

loc_8066464C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(66));
}

loc_80664650:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8066465C;
    }
}

loc_80664654:
{
    r3 = MemoryInline::FlatRead32((r4 + 52));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8066465C:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80664664:
{
    r6 = (r6 + 1);
    r0 = (r6 & 255);
    r0 = (r0 * 48);
    r4 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r4 + 52));
}

loc_8066467C:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(66))) {
        goto loc_80664688;
    }
}

loc_80664680:
{
    r0 = r5;
    goto loc_8066468C;
}

loc_80664688:
{
    r0 = -1;
}

loc_8066468C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_80664690:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806646B8;
    }
}

loc_80664694:
{
    r0 = MemoryInline::FlatRead32((r4 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066469C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806646B8;
    }
}

loc_806646A0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(66));
}

loc_806646A4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806646B0;
    }
}

loc_806646A8:
{
    r3 = MemoryInline::FlatRead32((r4 + 52));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_806646B0:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_806646B8:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8066456C;
    }
}

loc_806646C0:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80664560 func_80664560 preserves=true fpr_mask=0x00000000
