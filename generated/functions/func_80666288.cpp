#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80666288(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80666288;

loc_80666288:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 72), r30);
    MemoryInline::FlatWriteRam32((r1 + 68), r29);
    r29 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r29 + 8516));
    // inline leaf 0x80668FAC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80668FAC
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_806662B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806662F0;
    }
}

loc_806662B8:
{
    r30 = 0;
    MemoryInline::FlatWriteRam8((r1 + 36), static_cast<uint8_t>(r30));
    r3 = MemoryInline::FlatRead32((r29 + 8516));
    r4 = (r1 + 36);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    ctx->lr = 0x806662D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8066C8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r1 + 60));
}

loc_806662D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806662E8;
    }
}

loc_806662DC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 1612), static_cast<uint8_t>(r0));
    goto loc_806662F8;
}

loc_806662E8:
{
    MemoryInline::FlatWrite8((r31 + 1612), static_cast<uint8_t>(r30));
    goto loc_806662F8;
}

loc_806662F0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1612), static_cast<uint8_t>(r0));
}

loc_806662F8:
{
    r0 = MemoryInline::FlatRead8((r31 + 1612));
}

loc_80666300:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80666310;
    }
}

loc_80666304:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8408));
    // inline leaf 0x806561A8 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 10069), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806561A8
}

loc_80666310:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80666320:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80666340;
    }
}

loc_80666324:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r29 = (r3 + 56);
    goto loc_80666344;
}

loc_80666340:
{
    r29 = 0;
}

loc_80666344:
{
    r3 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r4 = (r1 + 8);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    ctx->lr = 0x80666360u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8066C8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 24));
    r0 = 99;
    MemoryInline::FlatWrite32((r31 + 1772), r3);
    r3 = MemoryInline::FlatRead16((r29 + 22820));
}

loc_80666374:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(99))) {
        goto loc_8066637C;
    }
}

loc_80666378:
{
    r0 = r3;
}

loc_8066637C:
{
    r0 = (r0 & 255);
    MemoryInline::FlatWrite32((r31 + 1616), r0);
    r0 = MemoryInline::FlatRead16((r29 + 22820));
}

loc_8066638C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_80666398;
    }
}

loc_80666390:
{
    r0 = 59;
    goto loc_8066639C;
}

loc_80666398:
{
    r0 = MemoryInline::FlatRead8((r29 + 22822));
}

loc_8066639C:
{
    MemoryInline::FlatWrite32((r31 + 1620), r0);
    r0 = MemoryInline::FlatRead16((r29 + 22820));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(99));
}

loc_806663A8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806663B4;
    }
}

loc_806663AC:
{
    r0 = 999;
    goto loc_806663B8;
}

loc_806663B4:
{
    r0 = MemoryInline::FlatRead16((r29 + 22824));
}

loc_806663B8:
{
    MemoryInline::FlatWrite32((r31 + 1624), r0);
    r3 = (r31 + 496);
    r4 = 6605;
    r5 = 0;
    ctx->lr = 0x806663CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r31 + 1240);
    r4 = 6606;
    r5 = 0;
    ctx->lr = 0x806663DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r31 + 868);
    r5 = (r31 + 1616);
    r4 = 6607;
    ctx->lr = 0x806663ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 84));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    r29 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 80);
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80666288 func_80666288 preserves=true fpr_mask=0x00000000
