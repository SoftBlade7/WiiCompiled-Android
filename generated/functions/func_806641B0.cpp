#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806641B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806641B0;

loc_806641B0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 8408));
    // inline leaf 0x80656F00 (16 guest instruction(s))
}

loc_inl0_0x80656F00:
{
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r5 = 1;
    r6 = 0;
    r0 = (r0 * 88);
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r4 + 89));
    r0 = MemoryInline::FlatRead32((r4 + 72));
    r3 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x80656F38;
    }
}

loc_inl0_0x80656F28:
{
    r0 = MemoryInline::FlatRead32((r4 + 64));
}

loc_inl0_0x80656F30:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl0_0x80656F38;
    }
}

loc_inl0_0x80656F34:
{
    r6 = 1;
}

loc_inl0_0x80656F38:
{
    r3 = r6;
}

loc_inl0_cont_80656F00:
{
    // end of inlined leaf 0x80656F00
}

loc_806641D8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_806641E4;
    }
}

loc_806641DC:
{
    r3 = 0;
    goto loc_8066422C;
}

loc_806641E4:
{
    r5 = MemoryInline::FlatRead32((r31 + 8));
}

loc_806641EC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80664228;
    }
}

loc_806641F0:
{
    r3 = MemoryInline::FlatRead32((r30 + 8408));
    r4 = 1;
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 89));
    r3 = MemoryInline::FlatRead32((r3 + 72));
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    r0 = (r3 & r0);
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    goto loc_8066422C;
}

loc_80664228:
{
    r3 = 0;
}

loc_8066422C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80664230:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806643A8;
    }
}

loc_80664234:
{
    r0 = 3;
    r3 = 0;
    ctr = r0;
}

loc_80664240:
{
    r0 = (r3 & 255);
    r0 = (r0 * 48);
    r4 = (r31 + r0);
    r5 = MemoryInline::FlatRead32((r4 + 52));
}

loc_80664254:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(66))) {
        goto loc_80664260;
    }
}

loc_80664258:
{
    r0 = r5;
    goto loc_80664264;
}

loc_80664260:
{
    r0 = -1;
}

loc_80664264:
{
}

loc_80664268:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_80664290;
    }
}

loc_8066426C:
{
    r0 = MemoryInline::FlatRead32((r4 + 32));
}

loc_80664274:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80664290;
    }
}

loc_80664278:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(66));
}

loc_8066427C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80664288;
    }
}

loc_80664280:
{
    r4 = MemoryInline::FlatRead32((r4 + 52));
    goto loc_80664398;
}

loc_80664288:
{
    r4 = -1;
    goto loc_80664398;
}

loc_80664290:
{
    r3 = (r3 + 1);
    r0 = (r3 & 255);
    r0 = (r0 * 48);
    r4 = (r31 + r0);
    r5 = MemoryInline::FlatRead32((r4 + 52));
}

loc_806642A8:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(66))) {
        goto loc_806642B4;
    }
}

loc_806642AC:
{
    r0 = r5;
    goto loc_806642B8;
}

loc_806642B4:
{
    r0 = -1;
}

loc_806642B8:
{
}

loc_806642BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_806642E4;
    }
}

loc_806642C0:
{
    r0 = MemoryInline::FlatRead32((r4 + 32));
}

loc_806642C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806642E4;
    }
}

loc_806642CC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(66));
}

loc_806642D0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806642DC;
    }
}

loc_806642D4:
{
    r4 = MemoryInline::FlatRead32((r4 + 52));
    goto loc_80664398;
}

loc_806642DC:
{
    r4 = -1;
    goto loc_80664398;
}

loc_806642E4:
{
    r3 = (r3 + 1);
    r0 = (r3 & 255);
    r0 = (r0 * 48);
    r4 = (r31 + r0);
    r5 = MemoryInline::FlatRead32((r4 + 52));
}

loc_806642FC:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(66))) {
        goto loc_80664308;
    }
}

loc_80664300:
{
    r0 = r5;
    goto loc_8066430C;
}

loc_80664308:
{
    r0 = -1;
}

loc_8066430C:
{
}

loc_80664310:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_80664338;
    }
}

loc_80664314:
{
    r0 = MemoryInline::FlatRead32((r4 + 32));
}

loc_8066431C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80664338;
    }
}

loc_80664320:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(66));
}

loc_80664324:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80664330;
    }
}

loc_80664328:
{
    r4 = MemoryInline::FlatRead32((r4 + 52));
    goto loc_80664398;
}

loc_80664330:
{
    r4 = -1;
    goto loc_80664398;
}

loc_80664338:
{
    r3 = (r3 + 1);
    r0 = (r3 & 255);
    r0 = (r0 * 48);
    r4 = (r31 + r0);
    r5 = MemoryInline::FlatRead32((r4 + 52));
}

loc_80664350:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(66))) {
        goto loc_8066435C;
    }
}

loc_80664354:
{
    r0 = r5;
    goto loc_80664360;
}

loc_8066435C:
{
    r0 = -1;
}

loc_80664360:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_80664364:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066438C;
    }
}

loc_80664368:
{
    r0 = MemoryInline::FlatRead32((r4 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80664370:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066438C;
    }
}

loc_80664374:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(66));
}

loc_80664378:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80664384;
    }
}

loc_8066437C:
{
    r4 = MemoryInline::FlatRead32((r4 + 52));
    goto loc_80664398;
}

loc_80664384:
{
    r4 = -1;
    goto loc_80664398;
}

loc_8066438C:
{
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80664240;
    }
}

loc_80664394:
{
    r4 = -1;
}

loc_80664398:
{
    r3 = (-1 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-1) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r0 = (r4 + 1);
    r0 = (r3 | r0);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
}

loc_806643A8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000003B gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x806641B0 func_806641B0 preserves=true fpr_mask=0x00000000
