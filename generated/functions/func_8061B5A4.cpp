#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8061B5A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8061B5A4;

loc_8061B5A4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0;
}

loc_8061B5C8:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r4 = 1;
    r5 = 0;
    r6 = 0;
    r0 = (r3 & 4080);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(784));
}

loc_8061B5E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061B64C;
    }
}

loc_8061B5E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8061B618;
    }
}

loc_8061B5E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(528));
}

loc_8061B5EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061B644;
    }
}

loc_8061B5F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8061B60C;
    }
}

loc_8061B5F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(288));
}

loc_8061B5F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061B63C;
    }
}

loc_8061B5FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8061B65C;
    }
}

loc_8061B600:
{
}

loc_8061B604:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(272))) {
        goto loc_8061B63C;
    }
}

loc_8061B608:
{
    goto loc_8061B65C;
}

loc_8061B60C:
{
}

loc_8061B610:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(544))) {
        goto loc_8061B644;
    }
}

loc_8061B614:
{
    goto loc_8061B65C;
}

loc_8061B618:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1040));
}

loc_8061B61C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061B654;
    }
}

loc_8061B620:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8061B630;
    }
}

loc_8061B624:
{
}

loc_8061B628:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(800))) {
        goto loc_8061B64C;
    }
}

loc_8061B62C:
{
    goto loc_8061B65C;
}

loc_8061B630:
{
}

loc_8061B634:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1056))) {
        goto loc_8061B654;
    }
}

loc_8061B638:
{
    goto loc_8061B65C;
}

loc_8061B63C:
{
    r6 = 0;
    goto loc_8061B660;
}

loc_8061B644:
{
    r6 = 1;
    goto loc_8061B660;
}

loc_8061B64C:
{
    r6 = 2;
    goto loc_8061B660;
}

loc_8061B654:
{
    r6 = 3;
    goto loc_8061B660;
}

loc_8061B65C:
{
    r4 = 0;
}

loc_8061B660:
{
    r0 = (r3 & 255);
}

loc_8061B668:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(17))) {
        goto loc_8061B688;
    }
}

loc_8061B66C:
{
}

loc_8061B670:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(18))) {
        goto loc_8061B690;
    }
}

loc_8061B674:
{
}

loc_8061B678:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(19))) {
        goto loc_8061B698;
    }
}

loc_8061B67C:
{
}

loc_8061B680:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(36))) {
        goto loc_8061B6A0;
    }
}

loc_8061B684:
{
    goto loc_8061B6A8;
}

loc_8061B688:
{
    r5 = 0;
    goto loc_8061B6AC;
}

loc_8061B690:
{
    r5 = 1;
    goto loc_8061B6AC;
}

loc_8061B698:
{
    r5 = 2;
    goto loc_8061B6AC;
}

loc_8061B6A0:
{
    r5 = 3;
    goto loc_8061B6AC;
}

loc_8061B6A8:
{
    r4 = 0;
}

loc_8061B6AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8061B6B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061B6C0;
    }
}

loc_8061B6B4:
{
    r3 = MemoryInline::FlatRead32((r31 + -10484));
    r4 = (r29 & 255);
    ctx->lr = 0x8061B6C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80524438u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8061B6C0:
{
    r29 = (r29 + 1);
    r30 = (r30 + 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(5));
}

loc_8061B6CC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8061B5C8;
    }
}

loc_8061B6D0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8061B5A4 func_8061B5A4 preserves=true fpr_mask=0x00000000
