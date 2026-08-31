#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80653ABC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r6_addic_src_0 = 0;
    uint32_t r6_addic_src_1 = 0;
    uint32_t r6_addic_src_2 = 0;
    uint32_t r6_addic_src_3 = 0;
    uint32_t r6_addic_src_4 = 0;
    uint32_t r6_addic_src_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80653ABC;

loc_80653ABC:
{
    r3 = 0x809C0000u;
}

loc_80653AC4:
{
    r8 = MemoryInline::FlatRead32((r3 + 8408));
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_80653AE0;
    }
}

loc_80653ACC:
{
}

loc_80653AD0:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(12))) {
        goto loc_80653AE0;
    }
}

loc_80653AD4:
{
    r3 = (r8 + r4);
    r5 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_80653AE4;
}

loc_80653AE0:
{
    r5 = 255;
}

loc_80653AE4:
{
    r0 = 3;
    r7 = -1;
    r6 = 0;
    ctr = r0;
}

loc_80653AF4:
{
}

loc_80653AF8:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_80653B10;
    }
}

loc_80653AFC:
{
}

loc_80653B00:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(12))) {
        goto loc_80653B10;
    }
}

loc_80653B04:
{
    r3 = (r8 + r6);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_80653B14;
}

loc_80653B10:
{
    r0 = 255;
}

loc_80653B14:
{
}

loc_80653B18:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_80653B28;
    }
}

loc_80653B1C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r4));
}

loc_80653B20:
{
    r7 = (r7 + 1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80653BCC;
    }
}

loc_80653B28:
{
    r6_addic_src_2 = r6;
    r6 = (r6_addic_src_2 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_addic_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80653B2C:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_80653B44;
    }
}

loc_80653B30:
{
}

loc_80653B34:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(12))) {
        goto loc_80653B44;
    }
}

loc_80653B38:
{
    r3 = (r8 + r6);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_80653B48;
}

loc_80653B44:
{
    r0 = 255;
}

loc_80653B48:
{
}

loc_80653B4C:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_80653B5C;
    }
}

loc_80653B50:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r4));
}

loc_80653B54:
{
    r7 = (r7 + 1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80653BCC;
    }
}

loc_80653B5C:
{
    r6_addic_src_3 = r6;
    r6 = (r6_addic_src_3 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_addic_src_3)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80653B60:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_80653B78;
    }
}

loc_80653B64:
{
}

loc_80653B68:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(12))) {
        goto loc_80653B78;
    }
}

loc_80653B6C:
{
    r3 = (r8 + r6);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_80653B7C;
}

loc_80653B78:
{
    r0 = 255;
}

loc_80653B7C:
{
}

loc_80653B80:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_80653B90;
    }
}

loc_80653B84:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r4));
}

loc_80653B88:
{
    r7 = (r7 + 1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80653BCC;
    }
}

loc_80653B90:
{
    r6_addic_src_4 = r6;
    r6 = (r6_addic_src_4 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_addic_src_4)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80653B94:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_80653BAC;
    }
}

loc_80653B98:
{
}

loc_80653B9C:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(12))) {
        goto loc_80653BAC;
    }
}

loc_80653BA0:
{
    r3 = (r8 + r6);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_80653BB0;
}

loc_80653BAC:
{
    r0 = 255;
}

loc_80653BB0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_80653BB4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80653BC4;
    }
}

loc_80653BB8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r4));
}

loc_80653BBC:
{
    r7 = (r7 + 1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80653BCC;
    }
}

loc_80653BC4:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80653AF4;
    }
}

loc_80653BCC:
{
    r3 = 0x809C0000u;
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r4 = (r4_rot_0 & 8160);
    r6 = MemoryInline::FlatRead32((r3 + 8408));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & 1020);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(6));
    r0 = (r0_rot_0 & -64);
    r4 = (r6 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 10156));
    r4 = (r4 * 48);
    r4 = (r6 + r4);
    r3 = (r4 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 336));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80653ABC func_80653ABC preserves=true fpr_mask=0x00000000
