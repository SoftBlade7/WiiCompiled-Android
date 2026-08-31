#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80207294(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r3_addic_src_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80207294;

loc_80207294:
{
    r5 = MemoryInline::FlatRead8(r3);
    r3 = MemoryInline::FlatRead8((r3 + 1));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(128));
}

loc_802072A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802072B4;
    }
}

loc_802072A4:
{
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r5));
    r3 = 1;
    r4 = 2;
    // inline leaf 0x801EF6C0 (3 guest instruction(s))
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_0 & -65536);
    r3 = (r0 + r4);
    // end of inlined leaf 0x801EF6C0
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_802072B4:
{
}

loc_802072B8:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(161))) {
        goto loc_802072DC;
    }
}

loc_802072BC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(223));
}

loc_802072C0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_802072DC;
    }
}

loc_802072C4:
{
    r3 = (r5 + 65536);
    r0 = (r3 + -320);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r3 = 1;
    r4 = 2;
    // inline leaf 0x801EF6C0 (3 guest instruction(s))
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & -65536);
    r3 = (r0 + r4);
    // end of inlined leaf 0x801EF6C0
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_802072DC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(128));
}

loc_802072E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020732C;
    }
}

loc_802072E4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(133));
}

loc_802072E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020732C;
    }
}

loc_802072EC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(134));
}

loc_802072F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020732C;
    }
}

loc_802072F4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(160));
}

loc_802072F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020732C;
    }
}

loc_802072FC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(235));
}

loc_80207300:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020732C;
    }
}

loc_80207304:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(236));
}

loc_80207308:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020732C;
    }
}

loc_8020730C:
{
}

loc_80207310:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(239))) {
        goto loc_8020731C;
    }
}

loc_80207314:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(249));
}

loc_80207318:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8020732C;
    }
}

loc_8020731C:
{
}

loc_80207320:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(253))) {
        goto loc_80207340;
    }
}

loc_80207324:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(255));
}

loc_80207328:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80207340;
    }
}

loc_8020732C:
{
    r0 = 95;
    r3 = 1;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = 2;
    // inline leaf 0x801EF6C0 (3 guest instruction(s))
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_7 & -65536);
    r3 = (r0 + r4);
    // end of inlined leaf 0x801EF6C0
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_80207340:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(253));
}

loc_80207344:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8020735C;
    }
}

loc_80207348:
{
    r0 = 95;
    r3 = 1;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = 2;
    // inline leaf 0x801EF6C0 (3 guest instruction(s))
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & -65536);
    r3 = (r0 + r4);
    // end of inlined leaf 0x801EF6C0
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_8020735C:
{
}

loc_80207360:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(129))) {
        goto loc_80207374;
    }
}

loc_80207364:
{
}

loc_80207368:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(132))) {
        goto loc_80207374;
    }
}

loc_8020736C:
{
    r0 = (r5 + -129);
    goto loc_802073E8;
}

loc_80207374:
{
}

loc_80207378:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(135))) {
        goto loc_8020738C;
    }
}

loc_8020737C:
{
}

loc_80207380:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(159))) {
        goto loc_8020738C;
    }
}

loc_80207384:
{
    r0 = (r5 + -131);
    goto loc_802073E8;
}

loc_8020738C:
{
}

loc_80207390:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(224))) {
        goto loc_802073A4;
    }
}

loc_80207394:
{
}

loc_80207398:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(234))) {
        goto loc_802073A4;
    }
}

loc_8020739C:
{
    r0 = (r5 + -195);
    goto loc_802073E8;
}

loc_802073A4:
{
}

loc_802073A8:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(237))) {
        goto loc_802073BC;
    }
}

loc_802073AC:
{
}

loc_802073B0:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(238))) {
        goto loc_802073BC;
    }
}

loc_802073B4:
{
    r0 = (r5 + -197);
    goto loc_802073E8;
}

loc_802073BC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(250));
}

loc_802073C0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_802073D4;
    }
}

loc_802073C4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(252));
}

loc_802073C8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_802073D4;
    }
}

loc_802073CC:
{
    r0 = (r5 + -208);
    goto loc_802073E8;
}

loc_802073D4:
{
    r0 = 95;
    r3 = 1;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = 2;
    // inline leaf 0x801EF6C0 (3 guest instruction(s))
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_3 & -65536);
    r3 = (r0 + r4);
    // end of inlined leaf 0x801EF6C0
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_802073E8:
{
    r3_addic_src_0 = r3;
    r3 = (r3_addic_src_0 + -64);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_addic_src_0)) + static_cast<uint64_t>(static_cast<uint32_t>(-64)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_802073EC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_802073F8;
    }
}

loc_802073F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(189));
}

loc_802073F4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8020740C;
    }
}

loc_802073F8:
{
    r0 = 95;
    r3 = 1;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = 2;
    // inline leaf 0x801EF6C0 (3 guest instruction(s))
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_6 & -65536);
    r3 = (r0 + r4);
    // end of inlined leaf 0x801EF6C0
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_8020740C:
{
    r0 = (r0 * 378);
    r5 = 0x80250000u;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & -2);
    r5 = (r5 + 12704);
    r0 = (r5 + r0);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80207428:
{
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80207444;
    }
}

loc_80207430:
{
    r0 = 95;
    r3 = 1;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = 2;
    // inline leaf 0x801EF6C0 (3 guest instruction(s))
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & -65536);
    r3 = (r0 + r4);
    // end of inlined leaf 0x801EF6C0
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_80207444:
{
    r3 = 2;
    r4 = 2;
    // inline leaf 0x801EF6C0 (3 guest instruction(s))
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_5 & -65536);
    r3 = (r0 + r4);
    // end of inlined leaf 0x801EF6C0
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80207294 func_80207294 preserves=true fpr_mask=0x00000000
