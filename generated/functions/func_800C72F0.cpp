#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800C72F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800C72F0;

loc_800C72F0:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800C72F4:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_800C7300;
    }
}

loc_800C72F8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_800C7300:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800C7304:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C7310;
    }
}

loc_800C7308:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_800C7310:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_800C731C;
    }
}

loc_800C7314:
{
    r5 = 0;
    goto loc_800C733C;
}

loc_800C731C:
{
    r0 = MemoryInline::FlatRead32(r3);
    r5 = 0;
}

loc_800C7328:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800C7338;
    }
}

loc_800C732C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_800C7334:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C733C;
    }
}

loc_800C7338:
{
    r5 = 1;
}

loc_800C733C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800C7340:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C734C;
    }
}

loc_800C7344:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_800C734C:
{
}

loc_800C7350:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800C735C;
    }
}

loc_800C7354:
{
    r5 = 0;
    goto loc_800C737C;
}

loc_800C735C:
{
    r0 = MemoryInline::FlatRead32(r4);
    r5 = 0;
}

loc_800C7368:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800C7378;
    }
}

loc_800C736C:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_800C7374:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C737C;
    }
}

loc_800C7378:
{
    r5 = 1;
}

loc_800C737C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800C7380:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C738C;
    }
}

loc_800C7384:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_800C738C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800C7390:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C739C;
    }
}

loc_800C7394:
{
    r0 = 0;
    goto loc_800C73E0;
}

loc_800C739C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C73A8;
    }
}

loc_800C73A0:
{
    r5 = 0;
    goto loc_800C73C8;
}

loc_800C73A8:
{
    r0 = MemoryInline::FlatRead32(r3);
    r5 = 0;
}

loc_800C73B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800C73C4;
    }
}

loc_800C73B8:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_800C73C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C73C8;
    }
}

loc_800C73C4:
{
    r5 = 1;
}

loc_800C73C8:
{
}

loc_800C73CC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800C73D8;
    }
}

loc_800C73D0:
{
    r0 = 0;
    goto loc_800C73E0;
}

loc_800C73D8:
{
    r0 = MemoryInline::FlatRead32(r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 1);
}

loc_800C73E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800C73E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C73F0;
    }
}

loc_800C73E8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_800C73F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800C73F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C7400;
    }
}

loc_800C73F8:
{
    r0 = 0;
    goto loc_800C7444;
}

loc_800C7400:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C740C;
    }
}

loc_800C7404:
{
    r5 = 0;
    goto loc_800C742C;
}

loc_800C740C:
{
    r0 = MemoryInline::FlatRead32(r4);
    r5 = 0;
}

loc_800C7418:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800C7428;
    }
}

loc_800C741C:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_800C7424:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C742C;
    }
}

loc_800C7428:
{
    r5 = 1;
}

loc_800C742C:
{
}

loc_800C7430:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800C743C;
    }
}

loc_800C7434:
{
    r0 = 0;
    goto loc_800C7444;
}

loc_800C743C:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 1);
}

loc_800C7444:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800C7448:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C7454;
    }
}

loc_800C744C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_800C7454:
{
    r5 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_800C7460:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C746C;
    }
}

loc_800C7464:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_800C746C:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800C72F0 func_800C72F0 preserves=true fpr_mask=0x00000000
