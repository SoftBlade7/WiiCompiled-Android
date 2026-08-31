#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807C8624(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

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

    goto loc_807C8624;

loc_807C8624:
{
    r6 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_807C862C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C8638;
    }
}

loc_807C8630:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_807C8638:
{
    r0 = 4;
    r7 = 0;
    r5 = 0;
    ctr = r0;
}

loc_807C8648:
{
    r4 = MemoryInline::FlatRead32((r3 + 260));
    r8 = (r4 + r5);
    r0 = MemoryInline::FlatRead32((r8 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
}

loc_807C8658:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C8664;
    }
}

loc_807C865C:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_807C8664:
{
    r5 = (r5 + 96);
    r8 = (r4 + r5);
    r0 = MemoryInline::FlatRead32((r8 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
}

loc_807C8674:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C8680;
    }
}

loc_807C8678:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_807C8680:
{
    r5 = (r5 + 96);
    r8 = (r4 + r5);
    r0 = MemoryInline::FlatRead32((r8 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
}

loc_807C8690:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C869C;
    }
}

loc_807C8694:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_807C869C:
{
    r5 = (r5 + 96);
    r8 = (r4 + r5);
    r0 = MemoryInline::FlatRead32((r8 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
}

loc_807C86AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C86B8;
    }
}

loc_807C86B0:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_807C86B8:
{
    r5 = (r5 + 96);
    r8 = (r4 + r5);
    r0 = MemoryInline::FlatRead32((r8 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
}

loc_807C86C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C86D4;
    }
}

loc_807C86CC:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_807C86D4:
{
    r5 = (r5 + 96);
    r8 = (r4 + r5);
    r0 = MemoryInline::FlatRead32((r8 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
}

loc_807C86E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C86F0;
    }
}

loc_807C86E8:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_807C86F0:
{
    r5 = (r5 + 96);
    r8 = (r4 + r5);
    r0 = MemoryInline::FlatRead32((r8 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
}

loc_807C8700:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C870C;
    }
}

loc_807C8704:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_807C870C:
{
    r5 = (r5 + 96);
    r8 = (r4 + r5);
    r0 = MemoryInline::FlatRead32((r8 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
}

loc_807C871C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C8728;
    }
}

loc_807C8720:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_807C8728:
{
    r5 = (r5 + 96);
    r8 = (r4 + r5);
    r0 = MemoryInline::FlatRead32((r8 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
}

loc_807C8738:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C8744;
    }
}

loc_807C873C:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_807C8744:
{
    r5 = (r5 + 96);
    r7 = (r7 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807C8648;
    }
}

loc_807C8750:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807C8624 func_807C8624 preserves=true fpr_mask=0x00000000
