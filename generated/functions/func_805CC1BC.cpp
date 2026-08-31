#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805CC1BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805CC1BC;

loc_805CC1BC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r0 = MemoryInline::FlatRead32((r3 + 848));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805CC1E0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805CC2CC;
    }
}

loc_805CC1E4:
{
    r4 = MemoryInline::FlatRead32((r3 + 32));
    r29 = -1;
    r4 = (r4 - r0);
    r0 = (r4 + -60);
}

loc_805CC1F8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1799))) {
        goto loc_805CC204;
    }
}

loc_805CC1FC:
{
    r29 = 0;
    goto loc_805CC23C;
}

loc_805CC204:
{
    r0 = (r4 + -1860);
}

loc_805CC20C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1799))) {
        goto loc_805CC218;
    }
}

loc_805CC210:
{
    r29 = 1;
    goto loc_805CC23C;
}

loc_805CC218:
{
    r0 = (r4 + -3660);
}

loc_805CC220:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1679))) {
        goto loc_805CC22C;
    }
}

loc_805CC224:
{
    r29 = 0;
    goto loc_805CC23C;
}

loc_805CC22C:
{
    r0 = (r4 + -5340);
}

loc_805CC234:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1919))) {
        goto loc_805CC23C;
    }
}

loc_805CC238:
{
    r29 = 1;
}

loc_805CC23C:
{
    r30 = (r3 + 104);
    r28 = 0;
    r31 = 0x80890000u;
}

loc_805CC248:
{
}

loc_805CC24C:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(r29))) {
        goto loc_805CC288;
    }
}

loc_805CC250:
{
    r3 = (r30 + 152);
    r4 = 0;
    // inline leaf 0x8063C830 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C830
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_805CC268:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805CC2BC;
    }
}

loc_805CC26C:
{
    r3 = (r30 + 152);
    r4 = 0;
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    f1.d = MemoryInline::FlatReadFloat32((r31 + 14836));
    r4 = 1;
    ctx->lr = 0x805CC284u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063C91Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_805CC2BC;
}

loc_805CC288:
{
    r3 = (r30 + 152);
    r4 = 0;
    // inline leaf 0x8063C830 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C830
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_805CC2A0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805CC2BC;
    }
}

loc_805CC2A4:
{
    r3 = (r30 + 152);
    r4 = 0;
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    f1.d = MemoryInline::FlatReadFloat32((r31 + 14836));
    r4 = 3;
    ctx->lr = 0x805CC2BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063C91Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805CC2BC:
{
    r28 = (r28 + 1);
    r30 = (r30 + 372);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(2));
}

loc_805CC2C8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805CC248;
    }
}

loc_805CC2CC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805CC1BC func_805CC1BC preserves=true fpr_mask=0x00000000
