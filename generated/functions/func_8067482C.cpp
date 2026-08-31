#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8067482C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8067482C;

loc_8067482C:
{
    MemoryInline::FlatWriteRam32((r1 + -496), r1);
    r1 = (r1 + -496);
    r0 = ctx->lr;
    r3 = 0x808B0000u;
    r5 = 448;
    MemoryInline::FlatWriteRam32((r1 + 500), r0);
    r3 = (r3 + 11400);
    MemoryInline::FlatWriteRam32((r1 + 492), r31);
    MemoryInline::FlatWriteRam32((r1 + 488), r30);
    MemoryInline::FlatWriteRam32((r1 + 484), r29);
    r29 = r4;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r3 = (r1 + 24);
    ctx->lr = 0x80674864u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80674874:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80674894;
    }
}

loc_80674878:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r30 = (r3 + 56);
    goto loc_80674898;
}

loc_80674894:
{
    r30 = 0;
}

loc_80674898:
{
    r31 = 0;
}

loc_8067489C:
{
    r0 = (r31 & 65535);
    r3 = (r1 + 16);
    r0 = (r0 * 448);
    r4 = (r30 + r0);
    r4 = (r4 + 22992);
    ctx->lr = 0x806748B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x805196B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806748B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806748EC;
    }
}

loc_806748BC:
{
    r3 = (r1 + 8);
    r4 = (r1 + 24);
    r5 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r29;
    r4 = (r1 + 8);
    r5 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806748E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_806748EC;
    }
}

loc_806748E4:
{
    r0 = 1;
    goto loc_806748FC;
}

loc_806748EC:
{
    r31 = (r31 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(30));
}

loc_806748F4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8067489C;
    }
}

loc_806748F8:
{
    r0 = 0;
}

loc_806748FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80674900:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8067493C;
    }
}

loc_80674904:
{
    r31 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r1 + 126));
    r3 = MemoryInline::FlatRead32((r31 + 8464));
    ctx->lr = 0x80674914u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8066375Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80674918:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80674934;
    }
}

loc_8067491C:
{
    r0 = MemoryInline::FlatRead8((r1 + 126));
    r3 = MemoryInline::FlatRead32((r31 + 8464));
    r0 = (r0 * 12);
    r3 = (r3 + r0);
    r3 = (r3 + 516);
    goto loc_80674940;
}

loc_80674934:
{
    r3 = 0;
    goto loc_80674940;
}

loc_8067493C:
{
    r3 = 0;
}

loc_80674940:
{
    r0 = MemoryInline::FlatRead32((r1 + 500));
    r31 = MemoryInline::FlatRead32((r1 + 492));
    r30 = MemoryInline::FlatRead32((r1 + 488));
    r29 = MemoryInline::FlatRead32((r1 + 484));
    ctx->lr = r0;
    r1 = (r1 + 496);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00000FB gpr_write=0xE00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8067482C func_8067482C preserves=true fpr_mask=0x00000000
