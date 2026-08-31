#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805BA274(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805BA274;

loc_805BA274:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = 0x80380000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r3 = MemoryInline::FlatRead32((r3 + 24576));
    r31 = MemoryInline::FlatRead32((r3 + 152));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805BA294:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805BA2A0;
    }
}

loc_805BA298:
{
    r0 = 0;
    goto loc_805BA32C;
}

loc_805BA2A0:
{
    r7 = 0x808B0000u;
    r0 = 112;
    r7 = (r7 + 29600);
    r3 = r31;
    r5 = MemoryInline::FlatRead8((r7 + 1));
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r5));
    r6 = MemoryInline::FlatRead8(r7);
    r5 = MemoryInline::FlatRead8((r7 + 2));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800135F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805BA2D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805BA2E4;
    }
}

loc_805BA2DC:
{
    r0 = 0;
    goto loc_805BA32C;
}

loc_805BA2E4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r31));
}

loc_805BA2E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BA2F8;
    }
}

loc_805BA2EC:
{
    r0 = MemoryInline::FlatRead8((r3 + -1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_805BA2F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805BA328;
    }
}

loc_805BA2F8:
{
    r4 = 0x80890000u;
    r5 = (r1 + 12);
    r4 = (r4 + 10184);
    r4 = (r4 + 33);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    r3 = (r3 + 2);
    ctx->lr = 0x805BA314u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013040u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = (-1 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-1) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r0 = (r3 + 1);
    r0 = (r4 | r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    goto loc_805BA32C;
}

loc_805BA328:
{
    r0 = 0;
}

loc_805BA32C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805BA330:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805BA33C;
    }
}

loc_805BA334:
{
    r3 = 0;
    goto loc_805BA3C4;
}

loc_805BA33C:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
}

loc_805BA344:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(785))) {
        goto loc_805BA388;
    }
}

loc_805BA348:
{
}

loc_805BA34C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(529))) {
        goto loc_805BA370;
    }
}

loc_805BA350:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(292));
}

loc_805BA354:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BA3C4;
    }
}

loc_805BA358:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805BA3C0;
    }
}

loc_805BA35C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(276));
}

loc_805BA360:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805BA3C0;
    }
}

loc_805BA364:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(273));
}

loc_805BA368:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805BA3C4;
    }
}

loc_805BA36C:
{
    goto loc_805BA3C0;
}

loc_805BA370:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(548));
}

loc_805BA374:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BA3C4;
    }
}

loc_805BA378:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805BA3C0;
    }
}

loc_805BA37C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(532));
}

loc_805BA380:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805BA3C0;
    }
}

loc_805BA384:
{
    goto loc_805BA3C4;
}

loc_805BA388:
{
}

loc_805BA38C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(1041))) {
        goto loc_805BA3A8;
    }
}

loc_805BA390:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(804));
}

loc_805BA394:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BA3C4;
    }
}

loc_805BA398:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805BA3C0;
    }
}

loc_805BA39C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(788));
}

loc_805BA3A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805BA3C0;
    }
}

loc_805BA3A4:
{
    goto loc_805BA3C4;
}

loc_805BA3A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1060));
}

loc_805BA3AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BA3C4;
    }
}

loc_805BA3B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805BA3C0;
    }
}

loc_805BA3B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1044));
}

loc_805BA3B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805BA3C0;
    }
}

loc_805BA3BC:
{
    goto loc_805BA3C4;
}

loc_805BA3C0:
{
    r3 = 0;
}

loc_805BA3C4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805BA274 func_805BA274 preserves=true fpr_mask=0x00000000
