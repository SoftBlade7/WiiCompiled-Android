#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013C6D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8013C6D0;

loc_8013C6D0:
{
}

loc_8013C6D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8013C754;
    }
}

loc_8013C6D8:
{
    r5 = 0x80330000u;
    r4 = 0x92490000u;
    r5 = (r5 + 25208);
    r0 = (r3 + -8);
    r3 = (r5 + 5860);
    r4 = (r4 + 9363);
    r0 = (r0 - r3);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (r3 + r0);
    r0 = (static_cast<int32_t>(r0) >> 4);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r3 = (r0 + r3);
    r0 = (r3 + 1);
    r4 = (r0 & 65535);
    r3 = (r4 * 28);
    r0 = (12 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(12) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3 = (r5 + r3);
    r3 = (r3 + 5860);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(12));
}

loc_8013C728:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8013C74C;
    }
}

loc_8013C72C:
{
    r0 = MemoryInline::FlatRead8((r3 + 26));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013C734:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013C740;
    }
}

loc_8013C738:
{
    r3 = (r3 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_8013C740:
{
    r4 = (r4 + 1);
    r3 = (r3 + 28);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8013C72C;
    }
}

loc_8013C74C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_8013C754:
{
    r3 = 0x80330000u;
    r0 = 2;
    r3 = (r3 + 25208);
    r4 = 0;
    r3 = (r3 + 5860);
    ctr = r0;
}

loc_8013C76C:
{
    r0 = MemoryInline::FlatRead8((r3 + 26));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013C774:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013C780;
    }
}

loc_8013C778:
{
    r3 = (r3 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_8013C780:
{
    r0 = MemoryInline::FlatRead8((r3 + 54));
    r4 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013C78C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013C798;
    }
}

loc_8013C790:
{
    r3 = (r3 + 36);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_8013C798:
{
    r0 = MemoryInline::FlatRead8((r3 + 82));
    r4 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013C7A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013C7B0;
    }
}

loc_8013C7A8:
{
    r3 = (r3 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_8013C7B0:
{
    r0 = MemoryInline::FlatRead8((r3 + 110));
    r4 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013C7BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013C7C8;
    }
}

loc_8013C7C0:
{
    r3 = (r3 + 92);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_8013C7C8:
{
    r0 = MemoryInline::FlatRead8((r3 + 138));
    r4 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013C7D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013C7E0;
    }
}

loc_8013C7D8:
{
    r3 = (r3 + 120);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_8013C7E0:
{
    r0 = MemoryInline::FlatRead8((r3 + 166));
    r4 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013C7EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013C7F8;
    }
}

loc_8013C7F0:
{
    r3 = (r3 + 148);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_8013C7F8:
{
    r4 = (r4 + 1);
    r3 = (r3 + 168);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8013C76C;
    }
}

loc_8013C804:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8013C6D0 func_8013C6D0 preserves=true fpr_mask=0x00000000
